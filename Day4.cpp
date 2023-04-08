class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        for (int i = 0; i < s.length(); i++)
        {
            char ch = s[i];
            if (ch == '(' || ch == '[' || ch == '{')
            {
                st.push(ch);
            }
            else
            {
                if (st.empty())
                    return false;
                char tp = st.top();
                if ((tp == '(' && ch == ')') || (tp == '[' && ch == ']') || (tp == '{' && ch == '}'))
                    st.pop();
                else
                    return false;
            }
        }
        return st.empty();
    }
};