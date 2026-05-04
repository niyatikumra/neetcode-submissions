class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            int tar=target-nums[i];
            if(mp.find(tar)!=mp.end())
            {
                ans.push_back(mp[tar]);
                ans.push_back(i);
               
                break;
            }
            mp[nums[i]]=i;
        }
        return ans;
        
    }
};
