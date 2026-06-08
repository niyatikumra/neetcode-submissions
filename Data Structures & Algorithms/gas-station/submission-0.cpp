class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int curr_gas=0;
        int start=0;
        int ttgas =0;
        int ttcost=0;
        for(int i=0;i<n;i++)
        {
            ttgas += gas[i];
            ttcost += cost[i];
            curr_gas += gas[i]-cost[i];
            if(curr_gas <0)
            {
                start=i+1;
                curr_gas=0;
            }
        }
        if(ttgas<ttcost)
        {
            return -1;
        }
        return start;
        
    }
};
