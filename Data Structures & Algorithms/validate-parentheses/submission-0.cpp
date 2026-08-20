class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> br={
            {'(',')'},
            {'{','}'},
            {'[',']'}
            };
        stack<char>st;
        bool ans = true;
        for(int i=0;i<s.size();i++) {
            if(s[i]==')'||s[i]=='}'||s[i]==']'){
                if(!st.empty() and s[i]==br[st.top()]) st.pop();
                else ans = false;
            }
            else st.push(s[i]);
        }
        
    return (st.empty() && ans);
    }
};