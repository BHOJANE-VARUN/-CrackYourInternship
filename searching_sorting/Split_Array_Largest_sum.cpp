class Solution {
public:
    bool mono(vector<int>&nums,int v,int k)
    {
        int cnt =0,cur=0;
        for(int i =0;i<nums.size();i++)
        {
            if(cur+nums[i]<=v)
            {
                cur += nums[i];
            }
            else{
                cur =nums[i];
                cnt++;
            }
        }
        if(cnt>=k)
        {
            return false;
        }
       // if(v==14) cout<<cnt<<endl;
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = INT_MIN,high = 0;
        for(auto i:nums)
        {
            low = max(low,i);
            high += i;
        }
        int mid;
        while(low<high)
        {
            mid = low + (high-low)/2;
            if(mono(nums,mid,k))
            {
                high = mid;
            }
            else{
                low = mid+1;
            }
          //  cout<<mid<<" "<<mono(nums,mid,k)<<endl;
        }
        return high;
    }
};