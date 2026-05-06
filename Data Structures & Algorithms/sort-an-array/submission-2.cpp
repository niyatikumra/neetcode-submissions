class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            int si =i;
            for(int j=i+1;j<n;j++)
            {
                if(nums[si]>nums[j])
                {
                    si=j;
                }
                
            }
            swap(nums[i],nums[si]);
        }
        return nums;
    }
};