class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int pivt=-1;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                pivt=i;
                break;
            }
        }
        if(pivt==-1)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i=n-1;i>pivt;i--)
        {
            if(nums[i]>nums[pivt])
            {
                swap(nums[i],nums[pivt]);
                break;
            }
        }
        reverse(nums.begin()+pivt+1,nums.end());

        
    }
};