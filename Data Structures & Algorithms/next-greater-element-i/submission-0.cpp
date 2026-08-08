class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>s;
        unordered_map<int,int>ng;
        int n=nums2.size();
        for(int i=n-1;i>=0;i--)
        {
            int curr=nums2[i];
            while(!s.empty() && s.top()<=curr)
            {
                s.pop();
            }
            if(s.empty())
            {
                ng[curr]=-1;
            }
            else
            {
                ng[curr]=s.top();
            }
            s.push(curr);
        }
        vector<int>result;
        for(int i=0;i<nums1.size();i++)
        {
            result.push_back(ng[nums1[i]]);
        }
        return result;
        
    }
};