// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int> ans;
//         int f=0;
//         for(int i =0;i<nums.size();i++)
//         {
//             for(int j =i+1;j<nums.size();j++)
//             {
//                 if(nums[i]+nums[j]==target)
//                 {
//                     ans.push_back(i);
//                     ans.push_back(j);
//                     f=1;
//                     break;
//                 }
//             }
//             if(f) break;
//         }
//         return ans;
//     }
// };
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i =0;i<nums.size();i++)
        {
            if(mp.find(target-nums[i])!=mp.end())
            {
                return {i,mp[target-nums[i]]};
            }
            else mp[nums[i]] = i;
        }
        return {};
    }
};