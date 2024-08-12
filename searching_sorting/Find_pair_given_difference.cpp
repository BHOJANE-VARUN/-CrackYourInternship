class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        // code here
        unordered_map<int,int> mp;
        for(auto i:arr)
        {
            if(mp[i+x] or mp[i-x])
            {
                return 1;
            }
            mp[i]++;
        }
        return -1;
    }
};