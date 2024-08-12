class Solution {
public:
    bool mono(vector<int>&arr,int m,int d)
    {
        int cur=0,cnt=0;
        for(int i =0;i<arr.size();i++)
        {
            if(arr[i]-arr[cur]>=d)
            {
                cnt++;
                cur=i;
            }
        }
        if(cnt>=m-1) return true;
        else return false;
    }
    int maxDistance(vector<int>& position, int m) {
        int low =1;
        int high = *max_element(position.begin(),position.end()) - *min_element(position.begin(),position.end());
        sort(position.begin(),position.end());
        //cout<<high<<endl;
        for(auto i:position) cout<<i<<" ";
        cout<<endl;
        int mid;
        int ans =0;
        while(low<=high)
        {
            mid = low + (high-low)/2;
            if(mono(position,m,mid))
            {
                ans =mid;
                low = mid+1;
            }
            else high = mid-1;
            cout<<mid<<" "<<mono(position,m,mid)<<endl;;
        }
        return ans;
    }
};