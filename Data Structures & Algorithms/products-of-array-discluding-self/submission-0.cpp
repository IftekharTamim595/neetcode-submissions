class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1,zeros = 0,idx;
        for(int i=0;i<nums.size();i++)  {
            if(nums[i]!=0) prod*=nums[i];
            if(nums[i]==0)  {zeros++;idx=i;}
        }
        vector<int>ans(nums.size(),0);
        if(zeros>1) return ans;
        if(zeros==1) ans[idx] = prod;
        else {for(int i=0;i<nums.size();i++)  {
            ans[i]=(prod/nums[i]);
        }}
    return ans;
    }
};
