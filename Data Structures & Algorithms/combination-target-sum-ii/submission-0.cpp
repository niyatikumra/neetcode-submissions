class Solution {
public:
    void helper(int index, int target , vector<int>&candidates, vector<int>&current , vector<vector<int>>&ans)
    {
        if(target==0)
        {
            ans.push_back(current);
            return;
        }
        for(int i=index; i<candidates.size();i++)
        {
            if(candidates[i]>target)
            {break;}
            if(i>index && candidates[i]== candidates[i-1]) continue;
             current.push_back(candidates[i]);
             helper(i+1,target-candidates[i],candidates,current,ans);
             current.pop_back();

        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
     sort(candidates.begin(),candidates.end());
     vector<vector<int>>ans;
     vector<int>current;
     helper(0,target,candidates,current,ans);
     return ans;
        
    }
};
