class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        for(int i=0;i<asteroids.size();i++)
        {
            int curr=asteroids[i];
            bool alive=true;
            while(alive && !st.empty() && st.top()>0 && curr<0)
            {
                if(st.top()<abs(curr))
                {
                    st.pop();
                }
                else if(st.top()==abs(curr))
                {
                    st.pop();
                    alive=false;
                }
                else
                {
                    alive=false;
                }
            }
            if(alive)
            {
                st.push(curr);
            }
        }
        vector<int>result(st.size());
        for(int i=st.size()-1;i>=0;i--)
        {
            result[i]=st.top();
            st.pop();
        }
        return result;

        
    }
};