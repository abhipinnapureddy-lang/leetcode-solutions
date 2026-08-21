class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
          int m = matrix.size();
        int n = matrix[0].size();

        vector<int> height(n, 0);
        int ans = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == '1')
                    height[j]++;
                else
                    height[j] = 0;
            }

            stack<int> st;

            for (int j = 0; j <= n; j++) {
                int curr = (j == n ? 0 : height[j]);

                while (!st.empty() && height[st.top()] > curr) {
                    int h = height[st.top()];
                    st.pop();

                    int width;
                    if (st.empty())
                        width = j;
                    else
                        width = j - st.top() - 1;

                    ans = max(ans, h * width);
                       }

                st.push(j);
            }
        }

        return ans;
    }
};