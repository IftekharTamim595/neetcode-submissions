class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int>st;
        int n = s.size();
        int ans = 0;
        int l=0,r=1;int lsz=1;
        for(r=0;r<n;r++){
            while(st.find(s[r])!=st.end()){
                st.erase(s[l]);
                l++;
            }
            st.insert(s[r]);
            ans = max(ans,r-l+1);
        }
        return ans;
    }
};
