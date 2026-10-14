class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        
        if(sum>num*9)
        return {};
       int c9=sum/9;
        int cr=sum%9;
        string ans="";
        ans.append(c9,'9');
        if(cr>0)
        ans+=to_string(cr);
        if (ans.length() < num) {
            ans.append(num - ans.length(), '0');
        }
        return ans;
    }
};