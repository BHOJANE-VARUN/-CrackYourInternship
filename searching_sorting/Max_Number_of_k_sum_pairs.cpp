// class Solution {
// public:
//     int maxOperations(vector<int>& nums, int k) {
//         unordered_map<int,int> mp;
//         int ans =0;
//         for(auto i:nums)
//         {
//             if(mp[k-i]>0)
//             {
//                 mp[k-i]--;
//                 ans++;
//             }
//             else
//             mp[i]++;
//         }
//         return ans;
//     }
// };

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int count=0;
        int left=0;
        int right=nums.size()-1;
        sort(nums.begin(),nums.end());
        while(right>left){
            if(nums[left]+nums[right]==k){
                count++; //We dont need to remove elements just inc the count and move pointers
                left++;
                right--;
            }
            else if(nums[left]+nums[right]>k){
                right--;
            }
            else if(nums[left]+nums[right]<k){
                left++;
            }
        }
        return count;
    }
};