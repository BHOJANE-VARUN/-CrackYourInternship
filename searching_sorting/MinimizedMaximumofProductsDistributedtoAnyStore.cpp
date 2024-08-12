class Solution {
public:
    bool mono(vector<int> &p,int n,int k)
    {
        int cur =0;
        for(int i =0;i<p.size();i++)
        {
            cur += p[i]/k;
            if(p[i]%k)
            {
                cur++;
            }
        }
        cout<<k<<" "<<cur<<endl;
        if(cur<=n) return true;
        else return false;
    }
    int minimizedMaximum(int n, vector<int>& quantities) {
        int low =1,high = *max_element(quantities.begin(),quantities.end());
        int mid;
        int ans =0;
        while(low<=high)
        {
            //cout<<low<<" "<<mid<<" "<<high<<endl;
            mid = low + (high-low)/2;
            if(mono(quantities,n,mid))
            {
                cout<<mid<<endl;
                high = mid-1;
                ans = mid;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};