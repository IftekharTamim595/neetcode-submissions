class Solution {
public:
    bool isPalindrome(string s) {
        string ss="";
        for(int i=0;i<s.size();i++){
            
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')||(s[i]>='0' && s[i]<='9')) ss+=s[i];
        }
        cout<<ss<<endl;
        for(int i=0;i<ss.size();i++) {
            if(tolower(ss[i]) != tolower(ss[ss.size() - 1 - i])) return false;
        }
        return true;
    }
};
