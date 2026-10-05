class Solution {
public:
    int scoreOfParentheses(string s) {
        int sc = 0;
        int ct = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '(')
            {
                ct++;
            }
            else
            {
                if(s[i - 1] == '(')
                {
                    sc += pow(2, ct - 1);
                }
                ct--;
            }
        }
        return sc;
    }
};