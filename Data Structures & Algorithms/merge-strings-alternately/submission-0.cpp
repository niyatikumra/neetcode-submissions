class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1=word1.length();
        int n2=word2.length();
        int i=0;
        int n=min(n1,n2);
        string word="";
        while(i<n)
        {
           word+=word1[i];
           word+=word2[i];
           i++;
        }
        if(i<n1)
        {
            word+= word1.substr(i);
        }
        if(i<n2)
        {
            word+=word2.substr(i);
        }
        return word;
        
    }
};