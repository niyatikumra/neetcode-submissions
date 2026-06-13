class Solution {
public:
    bool solve(string& s, string& p , int i ,int j)
    {
        if(j==p.length())
        {
            return i==s.length();
        }
        bool firstmatch=(i<s.length()&&(p[j]==s[i]||p[j]=='.'));
        if(j+1<p.length()&&p[j+1]=='*')
        {
            return solve(s,p,i,j+2)||(firstmatch && solve(s,p,i+1,j));
        }
        else
        {
            return firstmatch && solve(s,p,i+1,j+1);
        }
    }
    bool isMatch(string s, string p) {
        return solve(s,p,0,0);
        
    }
};
