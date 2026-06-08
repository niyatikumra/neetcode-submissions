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
    bool canAttendMeetings(vector<Interval>& intervals) {
        // Agar koi meeting nahi hai ya sirf ek hi meeting hai, toh koi conflict nahi hoga
        if (intervals.empty() || intervals.size() == 1) {
            return true;
        }

        // Step 1: Intervals ko unke 'start' time ke hisaab se sort karna
        // Yahan hum ek lambda function use kar rahe hain custom sorting ke liye
        sort(intervals.begin(), intervals.end(), [](const Interval& a, const Interval& b) {
            return a.start < b.start;
        });

        // Step 2: Overlap check karna
        // Loop n-1 tak chalayenge kyunki hum i+1 check kar rahe hain
        for (int i = 0; i < intervals.size() - 1; i++) {
            // Agar pehli meeting ka end time, aagli meeting ke start time se bada hai (overlap)
            if (intervals[i].end > intervals[i + 1].start) {
                return false;
            }
        }

        return true;
    }
};