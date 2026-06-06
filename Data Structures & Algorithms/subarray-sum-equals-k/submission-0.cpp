class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>prefixmp;
        prefixmp[0]=1;
        int  currsum=0;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            currsum+=nums[i];
            int reqsum=currsum-k;
            if(prefixmp.find(reqsum)!=prefixmp.end())
            {
                count += prefixmp[reqsum];
            }
            prefixmp[currsum]++;
        }
        return count;
    }
};