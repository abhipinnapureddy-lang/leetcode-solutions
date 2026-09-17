class Solution {
public:
    string removeDuplicateLetters(string s) {
                vector<int> count(26, 0);
        vector<bool> used(26, false);

        for (char c : s) {
            count[c - 'a']++;
        }

        stack<char> st;

        for (char c : s) {
            count[c - 'a']--;

            if (used[c - 'a'])
                continue;

            while (!st.empty() &&
                   st.top() > c &&
                   count[st.top() - 'a'] > 0) {
                
                used[st.top() - 'a'] = false;
                st.pop();
            }

            st.push(c);
            used[c - 'a'] = true;
        }

        string ans;

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};