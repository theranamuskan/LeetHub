class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        vector<pair<int,int>> a,b;
        for(int i=0;i<img1.size();i++){
            for(int j=0;j<img2.size();j++){
                if(img1[i][j]){
                    a.push_back({i,j});
                }
                if(img2[i][j]){
                    b.push_back({i,j});
                }
            }
        }
        map<pair<int,int>,int> mp;  
        int res=0;
        for(auto i:a){
            for(auto j:b){
                mp[{i.first-j.first,i.second-j.second}]++;
                res=max(res,mp[{i.first-j.first,i.second-j.second}]);
            }
        }
        return res;
    }
};