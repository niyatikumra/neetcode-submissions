class Solution {
private:
   void solve(int st, int n,int k , vector<int>&curr , vector<vector<int>>&ans)
   {
    if(curr.size()==k)
    {
        ans.push_back(curr);
        return;
    }
    for(int i=st;i<=n;i++)
    {
        curr.push_back(i);
        solve(i+1,n,k,curr,ans);
        curr.pop_back();
    }
   }
public:
    vector<vector<int>> combine(int n, int k) {
     vector<int>curr;
     vector<vector<int>>ans;
     solve(1,n,k,curr,ans);
     return ans;
        
    }
};