class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for (int num:nums)
        {
            mp[num]++;
        }
        priority_queue<pair<int,int>>maxheap;
        for(auto &p:mp)
        {
            maxheap.push({p.second,p.first});

        }
        vector<int>ans;
        while(k--)
        {
            ans.push_back(maxheap.top().second);
            maxheap.pop();
        }
        return ans;


        
    }
};
