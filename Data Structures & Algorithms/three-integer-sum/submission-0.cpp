class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            if(i>0  && nums[i]==nums[i-1])continue;
            int j=i+1;
            int p=n-1;
            while(j<p)
            {
                long long sum=(long long )nums[i]+(long long )nums[j]+(long long )nums[p];
                if(sum==0)
                {
                    ans.push_back({nums[i],nums[j],nums[p]});
                    while(j<p && nums[j]==nums[j+1])j++;
                    while(j<p && nums[p]==nums[p-1])p--;
                    j++;
                    p--;
                }
                else if(sum<0)
                {
                    j++;
                }
                else
                {
                    p--;
                }
            }
        }
        return ans;
        
    }
};
