class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string c:words)
        {
            string rev = c;
            reverse(rev.begin(), rev.end());
            if (rev == c) {
                return c;
            }
        }
        return {};
    }
};