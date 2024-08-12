class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int close = n-1;
        for(int i =nums.size()-2;i>=0;i--)
        {
            int cnt = i+nums[i];
            if(cnt>=close)
            {
                close = i;
            }
        }
        return close==0?1:0;
    }
};