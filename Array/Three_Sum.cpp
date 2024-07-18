// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         int n = nums.size();
//         sort(nums.begin(),nums.end());
//         set<vector<int>> ans;
//         unordered_map<int,int> mp;
//         for(int i =0;i<n;i++)
//         {
//             for(int j = i+1;j<n;j++)
//             {
//                 int cur = ((nums[i]+nums[j])*(-1));
//                 if(mp.find(cur)!=mp.end())
//                 {
//                     ans.insert({nums[i],nums[j],cur});
//                 }
//             }
//             mp[nums[i]] = 1;
//         }
//         vector<vector<int>> temp;
//         for(auto i:ans) temp.push_back(i);
//         return temp;
//     }
// };
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> out;
    int n = nums.size();
    
    // Sort the input array
    sort(nums.begin(), nums.end());
    
    // Fix the first element and use two pointers to find the other two elements
    for (int i = 0; i < n - 2; ++i) {
        // Skip duplicates for the first element
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        
        int target = -nums[i];
        int left = i + 1;
        int right = n - 1;
        
        while (left < right) {
            int sum = nums[left] + nums[right];
            
            if (sum == target) {
                // Found a triplet
                out.push_back({nums[i], nums[left], nums[right]});
                
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
    
    return out;
    
    }
};