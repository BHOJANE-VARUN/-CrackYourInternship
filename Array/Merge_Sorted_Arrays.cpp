class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int t=m+n-1,s = m-1,r=n-1;
        while(t>=0 and s>=0 and r>=0)
        {
            if(nums1[s]<=nums2[r])
            {
                nums1[t] = nums2[r];
                t--,r--; 
            }
            else{
                swap(nums1[s],nums1[t]);
                s--,t--;
            }
        }
        while(r>=0)
        {
            nums1[t] = nums2[r];
            t--,r--;
        }
    }
};