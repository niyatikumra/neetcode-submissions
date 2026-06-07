class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        while(i<n)
        {
            if(nums[i]>0 && nums[i]<=n && nums[nums[i]-1]!=nums[i])
            {
                swap(nums[i],nums[nums[i]-1]);
            }
            else
            {
                i++;
            }
        }
        for(int j=0;j<n;j++)
        {
            if(nums[j]!=j+1)
            {
                return j+1;
            }
        }
        return n+1;
        
    }
};