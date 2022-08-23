class Solution {
    public int reverse(int x) {
        int result = 0;
        while (x != 0)
        {
            int lastDigit = x % 10;
            int newResult = result * 10 + lastDigit;
            if ((newResult - lastDigit) / 10 != result)
            {
                return 0;
            }
            x /= 10;
            result = result * 10 + lastDigit;
        }
        return result;
    }
}