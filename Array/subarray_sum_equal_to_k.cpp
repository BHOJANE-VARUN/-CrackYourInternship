class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
    vector<int> mods(k,0);
    mods[0]=1;
    int ans =0;
    int sum =0;
    for(auto i:nums)
    {
        sum = ((sum+i)%k+k)%k;
        ans += mods[sum];
        mods[sum]++;
    }
    return ans;
}
};