class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0,high = nums.size()-1,mid;
        while(low<=high)
        {
            mid = low + (high-low)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>target and (nums[low]<=target or nums[low]>nums[mid]))
            {
                high = mid-1;
            }
            else if((nums[mid]>target and nums[high]>=target) or (nums[mid]<target and (nums[high]>=target or nums[mid]>nums[high])))
            {
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return -1;
    }
};
// mid<t and mid>high == low = mid+1
// mid<t and mid<high == high = mid-1