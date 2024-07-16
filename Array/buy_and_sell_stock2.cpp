class Solution {
public:
    int maxProfit(vector<int>& p) {
        int buy =0;
        int ans =0;
        for(int i =0;i<p.size()-1;i++)
        {
            if(p[i]>=p[i+1])
            {
                ans += p[i]-p[buy];
                buy = i+1;
            }
        }
        ans += p[p.size()-1]-p[buy];
        return ans;
    }
};