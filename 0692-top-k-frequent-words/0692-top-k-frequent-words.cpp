class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> m;
        for(auto i: words){
            m[i]++;
        }
        priority_queue<pair<int,string>> pq;
        for(auto it: m){
            pq.push({-it.second, it.first});
        }
        while(pq.size()>k){
            pq.pop();
        }
        vector<string> ans;
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};