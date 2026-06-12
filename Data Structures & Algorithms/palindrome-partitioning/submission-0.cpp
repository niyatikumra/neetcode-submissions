class Solution {
public:
    vector<vector<string>>result;
    void solve(int idx,string s, vector<string>&path)
    {
        if(idx==s.length())
        {
            result.push_back(path);
        }
        for(int i=idx;i<s.length();i++)
        {
            if (ispalindrome(s,idx,i))
            {
                path.push_back(s.substr(idx,i-idx+1));
                solve(i+1,s,path);
                path.pop_back();
            }
        }
    }
    bool ispalindrome(string s, int st ,int ed)
    {
        while(st<ed)
        {
            if(s[st]!=s[ed])
            {
                return false;
            }
            st++;
            ed--;
        }
        return true;
    }
    vector<vector<string>> partition(string s) {
        vector<string>path;
        solve(0,s,path);
        return result;
        
    }
};
