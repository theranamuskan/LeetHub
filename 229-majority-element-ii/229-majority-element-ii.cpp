class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        int c1(-1), c2(-1), c1_count(0), c2_count(0);

        for (const auto &x : nums)
        {
            if (x == c1)
                c1_count++;
            else if (x == c2)
                c2_count++;
            else if (!c1_count)
                c1 = x, c1_count = 1;
            else if (!c2_count)
                c2 = x, c2_count = 1;
            else
                c1_count--, c2_count--;
        }

        c1_count = c2_count = 0;
        for (const auto &x : nums)
            if (x == c1)
                c1_count++;
            else if (x == c2)
                c2_count++;

        vector<int> result;
        if (c1_count > size(nums) / 3)
            result.push_back(c1);
        if (c2_count > size(nums) / 3)
            result.push_back(c2);
        return result;
    }
};