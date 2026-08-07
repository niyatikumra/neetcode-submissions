class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        
        int n=position.size();
        stack<double>st;
        vector<pair<int,int>>cars(n);
        for(int i=0;i<n;i++)
        {
            cars[i]={position[i],speed[i]};
        }
        sort(cars.rbegin(),cars.rend());
        for(int i=0;i<n;i++)
        {
            double currentTime=(double)(target-cars[i].first)/cars[i].second;
            if(st.empty() || currentTime>st.top())
            {
                st.push(currentTime);
            }
        }
        return st.size();
    }
};
