class Solution {
public:
    int countVowelPermutation(int n) {
        long a = 1, e = 1, i = 1, o = 1, u = 1, mod = pow(10, 9)+7;
        long a2, e2, i2, o2, u2; 
        
        for (int j = 2; j <= n; j++) {
            a2 = (e + i + u) % mod;
            e2 = (a + i) % mod;
            i2 = (e + o) % mod;
            o2 = i;
            u2 = (o + i) % mod;
            
            a = a2, e = e2, i = i2, o = o2, u = u2;
        }
        
        return (a + e + i + o + u) % mod;
    }
};


// class Solution {
// public:
//     long long mod = 1e9+7;
//     long long dp[20005][5]; //at index i, no. of vowels that can be present 
    
//     int countVowelPermutation(int n) {
//         memset(dp,0,sizeof(dp));
//         for(int i=0;i<5;i++)
//             dp[0][i]=1;
//         for(int i=1;i<n;i++){
//             for(int j=0;j<5;j++){
//                 if(j==0){ //a
//                     dp[i][j]=(dp[i-1][1]+dp[i-1][2]+dp[i-1][4])%mod;
//                 }
//                 if(j==1){ //e
//                     dp[i][j]=(dp[i-1][0]+dp[i-1][2])%mod;
//                 }
//                 if(j==2){ //i
//                     dp[i][j]=(dp[i-1][1]+dp[i-1][3])%mod;
//                 }
//                 if(j==3){ //o
//                     dp[i][j]=(dp[i-1][2])%mod;
//                 }
//                 if(j==4){ //u
//                     dp[i][j]=(dp[i-1][2]+dp[i-1][3])%mod;
//                 }
//             }
//         }
//         return (dp[n-1][0]+dp[n-1][1]+dp[n-1][2]+dp[n-1][3]+dp[n-1][4])%mod;
//     }
// };