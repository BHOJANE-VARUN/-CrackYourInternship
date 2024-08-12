class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    vector<pair<int,int>> p;
	    for(int i=0;i<nums.size();i++)
	    {
	        p.push_back({nums[i],i});
	    }
	    sort(p.begin(),p.end());
	    int i =0,ans=0;
	    while(i<p.size())
	    {
	        if(p[i].second==i)
	        {
	            i++;
	        }
	        else{
	            swap(p[i],p[p[i].second]);
	            ans++;
	        }
	    }
	    return ans;
	}
};