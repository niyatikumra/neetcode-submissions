class Solution {
public:
    string simplifyPath(string path) {
        vector<string>st;
        stringstream ss(path);
        string segment;
        while(getline(ss,segment,'/'))
        {
            if(segment=="." || segment.empty())
            {
                continue;
            }
            else if(segment=="..")
            {
                if(!st.empty())
                {
                    st.pop_back();
                }
            }
            else
            {
                st.push_back(segment);
            }
        }
        string result="";
        for(string folder:st)
        {
            result+='/'+ folder;
        }
        if(result=="")
        {
            return "/";
        }
        return result;

        
    }
};