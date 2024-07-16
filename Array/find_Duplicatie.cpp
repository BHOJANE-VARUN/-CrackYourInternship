class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = 0;
        int fast =0;
        while(slow!=fast or slow==0)
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }
        //cout<<slow<<' '<<fast<<endl;
        slow = 0;
        while(slow!=fast)
        {
            slow = nums[slow];
            fast = nums[fast];
        }
        return fast;
    }
};