// Last updated: 7/3/2025, 8:36:16 PM
class Twitter {
public:
    int time=0;
    unordered_map<int, vector<pair<int,int>>> addNewTweet; 
    unordered_map<int,unordered_set<int>> userFollows;
    Twitter() {
        
    }
    
    void postTweet(int userId, int tweetId) {
        addNewTweet[userId].push_back({time++,tweetId});
    }
    
    vector<int> getNewsFeed(int userId) {
        vector<int> res;
        priority_queue<pair<int,int>> pq;
        userFollows[userId].insert(userId);
        for(auto f:userFollows[userId]){
            auto& tweet=addNewTweet[f];
            for(int i=tweet.size()-1;i>=0;i--){
                pq.push(tweet[i]);
            }
            
        }
        while(!pq.empty()&&res.size()<10){
                res.push_back(pq.top().second);
                pq.pop();
            }
        return res;
    }
    
    void follow(int followerId, int followeeId) {
        userFollows[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        userFollows[followerId].erase(followeeId);
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */