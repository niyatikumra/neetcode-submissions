class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int>mp;
        int n=s.length();
        int max_len=0;
        int left=0;
        int right=0;
        while(right<n)
        {
            if(mp.find(s[right])==mp.end())
            {
                mp.insert(s[right]);
                max_len=max(max_len,right-left+1);
                right++;
            }
            else
            {
                mp.erase(s[left]);
                left++;
            }
        }
        return max_len;

        
    }
};
