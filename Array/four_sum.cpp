class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> out;
        sort(nums.begin(),nums.end());
        for(int i =0;i<n-3;i++)
        {
            if(i>0 and nums[i]==nums[i-1]) continue;
            for(int j = i+1;j<n-2;j++)
            {
                if(j!=i+1 and nums[j]==nums[j-1]) continue;
                int left = j+1,right = n-1;
                long long int temp = (nums[i]+nums[j]);
                while (left < right) {
                long long int sum = nums[left] + nums[right]+temp;
            
                if (sum == target) {
                // Found a triplet
                out.push_back({nums[i],nums[j], nums[left], nums[right]});
                
                // Skip duplicates for the second element
                while (left < right && nums[left] == nums[left + 1]) left++;
                // Skip duplicates for the third element
                while (left < right && nums[right] == nums[right - 1]) right--;
                
                // Move both pointers inward
                left++;
                right--;
                } else if (sum < target) {
                // Sum is too small, move left pointer to increase sum
                left++;
                } else {
                // Sum is too large, move right pointer to decrease sum
                right--;
            }
            }
            }
        }
        return out;
    }
};