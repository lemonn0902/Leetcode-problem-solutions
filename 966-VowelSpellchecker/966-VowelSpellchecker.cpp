// Last updated: 9/14/2025, 1:43:26 PM
class Solution {
public:
    string wild(const string& word) {
        string res = word;
        for (char &c : res) {
            c = tolower(c);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                c = '*';
        }
        return res;
    }

    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        vector<string> res;

        unordered_set<string> exactWords(wordlist.begin(), wordlist.end());
        unordered_map<string, string> caseInsensitiveMap;
        unordered_map<string, string> vowelMap;

        for (const string& word : wordlist) {
            string lowerWord = word;
            transform(lowerWord.begin(), lowerWord.end(), lowerWord.begin(), ::tolower);

            if (caseInsensitiveMap.find(lowerWord) == caseInsensitiveMap.end())
                caseInsensitiveMap[lowerWord] = word;

            string wildWord = wild(lowerWord);
            if (vowelMap.find(wildWord) == vowelMap.end())
                vowelMap[wildWord] = word;
        }

        for (const string& query : queries) {
            if (exactWords.count(query)) {
                res.push_back(query);
                continue;
            }

            string queryLower = query;
            transform(queryLower.begin(), queryLower.end(), queryLower.begin(), ::tolower);

            if (caseInsensitiveMap.count(queryLower)) {
                res.push_back(caseInsensitiveMap[queryLower]);
                continue;
            }

            string queryWild = wild(queryLower);
            if (vowelMap.count(queryWild)) {
                res.push_back(vowelMap[queryWild]);
                continue;
            }

            res.push_back("");
        }

        return res;
    }
};
