class Solution {
public:
    bool reorderedPowerOf2(int N) {
        string str1 = to_string(N);
        sort(str1.begin(), str1.end());
        for (int i = 0; i < 30; i++) {
            string str2 = to_string(1 << i);
            sort(str2.begin(), str2.end());
            if (str1 == str2) return true;
        }
        return false;
    }
};