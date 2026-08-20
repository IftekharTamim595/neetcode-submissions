class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)  {
            mp[nums[i]]++;
        }
        //sort(mp.begin(),mp.end(),greater<int>());
        vector<pair<int,int>> vp(mp.begin(),mp.end());
        sort(vp.begin(),vp.end(),[](const auto& a, const auto& b){
            return a.second>b.second;
        });
        vector<int> ans;int cnt = 0;
        for(int i=0;i<k;i++)    ans.push_back(vp[i].first);
    return ans;
    }
};
