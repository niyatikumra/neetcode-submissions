class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            
            mp[nums[i]]++;
        }
        int maxcount=0;
        int res=0;
        for(auto it:mp)
        {
            if(it.second > maxcount) {
                maxcount = it.second;
                res = it.first;
            }
        }
        return res;
    }
};