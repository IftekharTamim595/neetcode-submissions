class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,int> an;int k=0,x=0;
        for(int i=0;i<strs.size();i++)  {
            string s = strs[i];
            sort(s.begin(),s.end());
            if(an.find(s)==an.end()){
                an[s] = ans.size();
                ans.push_back({});
            }
            ans[an[s]].push_back(strs[i]);
        }
        return ans;
    }
};
