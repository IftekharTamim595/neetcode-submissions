class Solution {
public:

    string encode(vector<string>& strs) {
        string enc = "";
            for(int i=0;i<strs.size();i++)   {
                string s = strs[i];
                enc+=to_string(s.size())+'#'+s;
            }
            return enc;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i=0,n=s.size(),j;
        while(i<n){
            j = i;
            while(s[j]!='#')    j++;
            int l = stoi(s.substr(i,j-i));
            string dc = s.substr(j+1,l);
            ans.push_back(dc);
            i = j+l+1;
        }
        return ans;
    }
};
