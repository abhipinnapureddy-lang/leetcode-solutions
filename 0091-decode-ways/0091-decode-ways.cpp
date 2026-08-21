class Solution {
public:
    int numDecodings(string s) {
         int n = s.size();

        if (s[0] == '0')
            return 0;

        int a = 1;
        int b = 1;

        for (int i = 1; i < n; i++) {
            int c = 0;

            if (s[i] != '0')
                c += b;

            int num = (s[i - 1] - '0') * 10 + (s[i] - '0');

            if (num >= 10 && num <= 26)
                c += a;

            a = b;
            b = c;
        }

        return b;
    }
};