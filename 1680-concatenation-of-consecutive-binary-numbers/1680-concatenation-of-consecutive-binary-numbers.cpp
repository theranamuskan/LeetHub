class Solution{
    public:
    int concatenatedBinary(int n){
        long long int ans=0;
        int Mod=1e9+7, i=1;
        while(i<=n){
            ans=((ans<<(1+int(log2(i))))%Mod+i)%Mod;
            i++;
        }
        return ans;
    }
};