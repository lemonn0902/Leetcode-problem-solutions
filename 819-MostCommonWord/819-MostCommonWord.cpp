// Last updated: 8/24/2025, 1:07:57 PM
class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        transform(paragraph.begin(), paragraph.end(), paragraph.begin(), ::tolower);
        unordered_map<string,int> mpp;
        unordered_set<string> bannedSet(banned.begin(), banned.end());
        for (char &c : paragraph) {
            if (ispunct(c)) c = ' ';
        }
        string word="";
        for (int i = 0; i < paragraph.size(); i++) {
            if (isalnum(paragraph[i])) {
                word += paragraph[i];
            }
            if (paragraph[i] == ' ') {
                if (!word.empty() && bannedSet.find(word) == bannedSet.end()) {
                    mpp[word]++;
                }
                word.clear();
            }
        }
        if (!word.empty() && bannedSet.find(word) == bannedSet.end()) {
            mpp[word]++;
        }
        string ans;
        int max = 0;
        for (auto &p : mpp) {
            if (p.second > max) {
                max = p.second;
                ans = p.first;
            }
        }

        return ans;
    }
};
