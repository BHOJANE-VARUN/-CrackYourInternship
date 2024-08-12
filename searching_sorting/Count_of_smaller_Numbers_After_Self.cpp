class Solution {
public:
    vector<int> mp;
    void merge(int low,int mid,int high,vector<pair<int,int>>&arr)
    {
        int i =low,j=mid+1;
        vector<pair<int,int>> ans;
        while(i<=mid and j<=high)
        {
            //  if(low==0 and high==arr.size()-1)
            // {
            //     cout<<arr[i]<<" "<<arr[j]<<" "<<cnt<<endl;
            // }
            if(arr[i].first <= arr[j].first){
                ans.push_back(arr[j]);
                j++;
            }
            else{
                
                mp[arr[i].second] += high-j+1;
                ans.push_back(arr[i]);
                i++;
            }
           
        }
        while(i<=mid)
        {
            ans.push_back(arr[i]);
            i++;
        }
        while(j<=high)
        {
            ans.push_back(arr[j]);j++;
        }
        int k =0;
        for(int v =low;v<=high;v++)
        {
            arr[v] = ans[k];
            k++;
        }
    }
    void mergesort(int low,int high,vector<pair<int,int>>&nums)
    {
        if(high<=low) return;

        int mid = (high+low)/2;//0 3 = 1
        //cout<<low<<" "<<mid<<" "<<high<<endl;
        mergesort(low,mid,nums);
        // 0 1
        mergesort(mid+1,high,nums);
        // 2 3
        //  for(auto i:nums) cout<<i<<" ";
        //  cout<<endl;
         merge(low,mid,high,nums);
        //  for(auto i:nums) cout<<i<<" ";
        //  cout<<endl;
        //  for(auto i:mp) cout<<i.first<<" "<<i.second<<endl;
        //  cout<<endl;
    }
    vector<int> countSmaller(vector<int>& nums) {
        vector<pair<int,int>> temp;
        mp = vector<int> (nums.size(),0);
        for(int i =0;i<nums.size();i++)
        {
            temp.push_back({nums[i],i});
        }
        mergesort(0,nums.size()-1,temp);
        return mp;
    }
};