// class Solution {
// public:
//     int firstMissingPositive(vector<int>& nums) {
//         map<int,bool> mp;
//         int ans =1;
//         for(auto i:nums)
//         {
//             if(i>0)
//             {
//                 mp[i] = true;
//                 if(ans==i)
//                 {
//                     int f= 1;
//                     for(auto j:mp)
//                     {
//                         if(j.first-ans>1)
//                         {
//                             ans++;
//                             f =0;
//                             break;
//                         }
//                         ans = j.first;
//                     }
//                     if(f) ans++;
//                 }
//             }
//         }
//         return ans;
//     }
// };
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i =0;
        while(i<nums.size())
        {
           // cout<<nums[i]<<endl;
            if(nums[i]<1 or nums[i]>nums.size() or nums[i]==nums[nums[i]-1])
            {
                i++;
                continue;
            }
            //cout<<nums[i]<<endl;
           // cout<<nums[i]<<" "<<nums[nums[i]-1]<<endl;
            swap(nums[i],nums[nums[i]-1]);
          //  cout<<nums[i]<<endl;
            
           
        }
        for(int i =0;i<nums.size();i++)
        {
            if(nums[i]==i+1) continue;
            return i+1;
        }
        return nums.size()+1;
    }
};