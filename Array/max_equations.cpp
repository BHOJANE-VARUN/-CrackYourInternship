class Solution {
public:
    int findMaxValueOfEquation(vector<vector<int>>& points, int k) {
        // x at i want all x-k elements 
        // maximum of x-ele,y
        priority_queue<pair<int,int>> p;
        int ans = INT_MIN;
        for(int i =0;i<points.size();i++)
        {
            while(!p.empty() and points[i][0]-p.top().second>k)
            {
                p.pop();
            }
            if(!p.empty())
            {
                int cur = p.top().first + points[i][0] + points[i][1];
                ans = max(ans,cur);
            }
            p.push({points[i][1]-points[i][0],points[i][0]});
        }
        return ans;
    }
};