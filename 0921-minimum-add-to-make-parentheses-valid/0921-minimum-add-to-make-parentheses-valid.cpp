class Solution {
public:
    int minAddToMakeValid(string s) {
        int o=0,c=0;
        stack<char> st;
        for(char ch:s)
        {
            if(ch=='(')
            st.push(ch);
            else
            {
                if(st.empty()){
                    c++;
                continue;
                }
                if(st.top()=='(')
                st.pop();
                else
                st.push(ch);
            }
        }
        while(!st.empty())
        {
            if(st.top()=='(')
            o++;
            else
            c++;
            st.pop();
        }
        return (o+c);
    }
};