class Solution {
public:
    bool removeOne(int rem,vector<int>& digits) {
            for (int i = 0; i < digits.size(); i++) {
                if (digits[i] % 3 == rem) {
                    digits.erase(digits.begin() + i);
                    return true;
                }
            }
            return false;
        };
        bool removetwo(int rem,vector<int> &digits)
        {
            int count=0;
            for (int i = 0; i < digits.size()&& count<2; )
            {
                if (digits[i] % 3 == rem) {
                    digits.erase(digits.begin() + i);
                    count++;
                }
                else
                i++;
            }
            return count==2;
        }
    string largestMultipleOfThree(vector<int>& digits) {
        int sum=0;
        sort(digits.begin(), digits.end());
        for(int i=0;i<digits.size();i++)
        {
            sum+=digits[i];
        }
         if(sum%3==1)
        {
            bool cmp=removeOne(1,digits);
            if(!cmp)
            removetwo(2,digits);
        }
        else if(sum%3==2)
        {
            bool cmp=removeOne(2,digits);
            if(!cmp)
            removetwo(1,digits);
        }
        sort(digits.rbegin(), digits.rend());
        if (digits.empty())
            return "";
            string ans = "";
            if (digits[0] == 0)
            return "0";
            for (int x : digits)
            ans += to_string(x);

        return ans;
    }
};