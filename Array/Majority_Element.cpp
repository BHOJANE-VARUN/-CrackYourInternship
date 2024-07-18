class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele =-1,cnt =0;
       for(auto i:nums)
       {
            if(cnt==0)
            {
                ele = i;
                cnt++;
            }
            else if(ele==i) cnt++;
            else cnt--;
       }
       return ele; 
    }
};