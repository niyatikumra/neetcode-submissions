class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int lp=0;
        int rp=n-1;
        int ans=0;
        int currwt;
        int w;
        int ht;

        while(lp<rp)
        {
            w=rp-lp;
            ht=min(heights[lp],heights[rp]);
            currwt=w*ht;
            ans=max(currwt,ans);
            if(heights[lp]<heights[rp])
            {
                lp++;
            }
            else
            {
                rp--;
            }
        }
        return ans;
    }
};
