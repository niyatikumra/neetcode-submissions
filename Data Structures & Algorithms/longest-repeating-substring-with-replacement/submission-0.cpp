class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int maxlen=0;
        int maxfreq=0;
        vector<int>count(26,0);
        for(int r=0;r<s.size();r++)
        {
           count[s[r]-'A']++;
           maxfreq=max(maxfreq,count[s[r]-'A']);
           if((r-l+1)-maxfreq>k)
           {
            count[s[l]-'A']--;
            l++;
           }
           maxlen=max(maxlen,(r-l+1));
        }
        return maxlen;
        
    }
};
