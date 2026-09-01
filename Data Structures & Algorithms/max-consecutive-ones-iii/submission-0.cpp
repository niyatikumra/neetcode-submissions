class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0;
        int n=nums.size();
        int zerocount=0;
        int maxlen=0;
        for(int r=0;r<n;r++)
        {
            if(nums[r]==0)
            {
                zerocount++;
            }
            while(zerocount>k)
            {
                if(nums[l]==0)
                {
                    zerocount--;
                }
                l++;
            }
           maxlen=max(maxlen,r-l+1); 
        }
        return maxlen;
        
    }
};