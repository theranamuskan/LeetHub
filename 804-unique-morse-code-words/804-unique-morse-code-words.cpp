class Solution
{
public:
    int uniqueMorseRepresentations(vector<string> &words)
    {
        vector<string> str = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
        set<string> st;
        for (auto it : words)
        {
            string code="";
            for (auto i : it)
                code += str[i - 'a'];
                st.insert(code);
        }
        return st.size();
    }
};

