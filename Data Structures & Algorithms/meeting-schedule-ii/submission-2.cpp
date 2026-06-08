/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        if(intervals.empty()) return 0;
        vector<int>start_time;
        vector<int>end_time;
        for(const auto& meeting:intervals)
        {
            start_time.push_back(meeting.start);
            end_time.push_back(meeting.end);
        }
        sort(start_time.begin(),start_time.end());
        sort(end_time.begin(),end_time.end());
        int curr_room=0;
        int max_room=0;
        int st=0; 
        int et=0;
        while(st<intervals.size())
        {
            if( et== intervals.size()|| start_time[st]<end_time[et])
            {
                curr_room++;
                st++;
            }
            else
            {
                curr_room--;
                et++;
            }
            max_room=max(max_room,curr_room);
        }
        return max_room;
        
    }
};
