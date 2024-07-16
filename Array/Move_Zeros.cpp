// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         for(int i = nums.size()-1;i>=0;i--)
//         {
//             if(nums[i]!=0)
//             {
//                 continue;
//             }
//             else{
//                 int cur =i;
//                 while(cur+1<nums.size() and nums[cur+1]!=0)
//                 {
//                     swap(nums[cur],nums[cur+1]);
//                     cur++;
//                 }
//             }
//         }
//     }
// };
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cur =0;
        for(int i =0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                cur = max(cur,i);
                while(cur<nums.size() and nums[cur]==0)
                {
                    cur++;
                }
                if(cur<nums.size())
                swap(nums[i],nums[cur]);
            }
        }
    }
};