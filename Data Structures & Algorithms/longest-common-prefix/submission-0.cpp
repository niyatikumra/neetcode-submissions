class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) "";
        int minlen=strs[0].length();
        for(int i=0;i<strs.size();i++)
        {
            if(strs[i].length()<minlen)
            {
                minlen=strs[i].length();
            }
        }
        string prefix="";
        for(int i=0 ;i<minlen;i++)
        {
            char charcurr=strs[0][i];
            for(int j=0;j<strs.size();j++)
            {
                if(strs[j][i]!=charcurr)
                {
                    return prefix;
                }
            }
            prefix+=charcurr;
        }
        return prefix;
    }
};