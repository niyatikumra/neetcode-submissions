class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>counts;
        vector<int>ans;
        for(int num:nums1)
        {
            counts[num]++;
        }
        for(int num:nums2)
        {
            if(counts[num]>0)
            {
                ans.push_back(num);
                counts[num]=0;
            }
        }
        return ans;
        
    }
};