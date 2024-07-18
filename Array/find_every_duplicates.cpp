class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        for(int i =0;i<nums.size();i++)
        {
            int cur = nums[i]%(n+1);
            if(nums[cur-1]>n)
            {
                ans.push_back(cur);
            }
            else{
                nums[cur-1] += n+1;
            }
        }
        return ans;
    }
};