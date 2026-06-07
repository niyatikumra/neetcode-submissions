class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        int m=nums1.size();
        int n=nums2.size();
        vector<int>a ;
        while(i<m && j<n)
        {
            if(nums1[i]<nums2[j])
            {
               a.push_back(nums1[i]);
               i++;
            }
            else
            {
                a.push_back(nums2[j]);
                j++;
            }
        }
        while(i<m)
        {
           a.push_back(nums1[i]);
           i++;
        }
        while(j<n)
        {
            a.push_back(nums2[j]);
            j++;

        }

        int s=a.size();
        double median=0.0;
        if(s%2!=0)
        {
           median=a[s/2];
        }
        else
        {
            median=(a[s/2]+ a[(s/2)-1])/2.0;
        }
        return median;


        
    }
};
