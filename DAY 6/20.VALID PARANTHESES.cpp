class Solution {
public:
    bool isValid(string s) {
        if(s.length() & 1) return false; //odd length strings can't be balanced
        stack<char> st;
        st.push('a'); // to avoid runtime error
        for(auto it: s)
        {
            if(it=='(' || it=='[' || it=='{'){
            st.push(it);

            }
            else if((it==')' && st.top()=='(') || (it=='}' && st.top()=='{') || (it==']' && st.top()=='['))
            {
                st.pop();
            }
            else{
                return false;
            }
        }
        
        if(st.size()!=1)
        return false;
        
        return true;
        
    }
};
