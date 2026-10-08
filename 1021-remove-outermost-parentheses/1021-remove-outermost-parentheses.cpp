class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int c=0;
        for(char ch: s){
           if(ch == '(') {
            if(c > 0)
          ans.push_back(ch);
            c++;
              }
         else {
          c--;
          if(c > 0)
        ans.push_back(ch);
              }
        }
        return ans;
    }
};