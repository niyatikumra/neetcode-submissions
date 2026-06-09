class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int l=0;
        int r=arr.size()-1;
        while(r-l>=k)
        {
            int left=abs(arr[l]-x);
            int right=abs(arr[r]-x);
            if(left>right)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return vector<int>(arr.begin()+l,arr.begin()+r+1);
        
    }
};