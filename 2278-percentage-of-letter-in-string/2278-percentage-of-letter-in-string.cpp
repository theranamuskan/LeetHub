class Solution
{
  public:
    int percentageLetter(string s, char letter) 
    {
      int count = 0;
      for (int i = 0; i < s.size(); i++) 
      {
        if (s[i] == letter) 
        {
          count++;
        }
      }
        
      if(count==0) //if letter is not found in the string, return zero.
      {
          return 0;
      }
        
        return (int)(count * 100) / s.size();
    }
};