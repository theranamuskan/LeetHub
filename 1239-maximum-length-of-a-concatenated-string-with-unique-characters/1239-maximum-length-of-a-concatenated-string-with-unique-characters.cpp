class Solution {
public:
    int n;
    
    int solve(int ind, vector<string>& arr,map<char,int> m){
        if(ind==n)
            return 0;
        int ans=solve(ind+1,arr,m);
        bool f=true;
        set<int> st;
        for(auto &x: arr[ind]){
            if(m.find(x)!=m.end()){
                f=false;
                break;
            }
            if(st.find(x)!=st.end()){
                f=false;
                break;
            }
            st.insert(x);
        }
        if(f){
            for(auto &x: arr[ind]){
                m[x]++;
            }
            ans=max(ans, (int)arr[ind].size()+solve(ind+1, arr, m));
            for(auto &x: arr[ind]){
                m[x]--;
            }
        }
        return ans;
    }
    
    int maxLength(vector<string>& arr) {
        n=arr.size();
        map<char,int> m;
        return solve(0, arr, m);
    }
};