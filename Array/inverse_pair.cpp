class Solution {

public:
int ans =0;
void merge(vector<int> &a, vector<int> &b, vector<int> &c) {
    for(int i=0;i<b.size();i++)
    {
        long long int temp = b[i];temp = temp*2;
        auto it = upper_bound(a.begin(),a.end(),temp);
        ans += a.end()-it;
    }
    int i = 0, j = 0;
    while (i < a.size() && j < b.size()) {
        if (a[i] <= b[j]) {
            c.push_back(a[i]);
            i++;
        } else {
            c.push_back(b[j]);
            j++;
        }
    }
    // Append the remaining elements of a (if any)
    while (i < a.size()) {
        c.push_back(a[i]);
        i++;
    }
    // Append the remaining elements of b (if any)
    while (j < b.size()) {
        c.push_back(b[j]);
        j++;
    }
}
    vector<int> mergesort(vector<int> &nums,int i,int j)
    {
        //cout<<i<<" "<<j<<endl;
        if(i>j) return {};
        if(i==j) return {nums[i]};
        int half = (j-i)/2;
        vector<int> left = mergesort(nums,i,i+half);
        vector<int> right = mergesort(nums,i+half+1,j);
        vector<int> ans;
        merge(left,right,ans);
        return ans;
    }
    int reversePairs(vector<int>& nums) {
        nums = mergesort(nums,0,nums.size()-1);
        return ans;
    }
};