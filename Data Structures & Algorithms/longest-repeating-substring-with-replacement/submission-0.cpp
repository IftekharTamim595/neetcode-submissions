class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>cnt(26,0);
        int maxi = 0,ans=0,l=0;
        for(int r=0;r<s.size();r++){
            cnt[s[r]-'A']++;
            maxi = max(maxi,cnt[s[r]-'A']);
            while((r-l+1)-maxi>k){
                cnt[s[l]-'A']--;
                l++;
            }
            ans = max(ans,(r-l+1));
        }
        return ans;
    }
};