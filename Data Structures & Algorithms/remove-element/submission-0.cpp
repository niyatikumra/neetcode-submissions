class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>ans;
        nums.erase(remove(nums.begin(),nums.end(),val),nums.end());
        return nums.size();
        
    }
};