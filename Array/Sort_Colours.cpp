class Solution {
public:
    void sortColors(vector<int>& nums) {
       // sort(nums.begin(),nums.end());
       int o =0,s=0,t =nums.size()-1;
       while(s<=t)
       {
            if(nums[t]==2)
            {
                t--;
            }
            else if(nums[o]==0)
            {
                o++;
                if(o>s) s =o;
            }
            else if(nums[s]==1)
            {
                s++;
            }
            else{
                if(nums[s]==0)
                {
                    swap(nums[s],nums[o]);
                    o++;
                    s++;
                }
                else{
                    swap(nums[s],nums[t]);
                    t--;
                }
            }
            for(auto i:nums) cout<<i<<" ";
            cout<<endl;
       }
    }
};