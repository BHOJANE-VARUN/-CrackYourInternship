class Solution {
public:
    vector<int> row = {0,1,0,-1,1,-1,1,-1};
    vector<int> col = {1,0,-1,0,1,-1,-1,1};
    bool check(int i,int j,int n,int m)
    {
        if(i>=0 and j>=0 and i<n and j<m)
        {
            return true;
        }
        else return false;
    }
    bool islive(vector<vector<int>>&arr,int i,int j)
    {
        int n = arr.size(),m = arr[0].size();
        int cnt =0;
        for(int it =0;it<8;it++)
        {
            int currow = row[it]+i;
            int curcol = col[it]+j;
            if(check(currow,curcol,n,m) and arr[currow][curcol]==1)
            {
                cnt++;
            }
        }
        cout<<i<<" "<<j<<" "<<cnt<<endl;
        if(cnt>3)
        {
            return 0;
        }
        else if(cnt==2) return (arr[i][j]==1?1:0);
        else if(cnt==3) return 1;
        else return 0;
    }
    void gameOfLife(vector<vector<int>>& board) {
       //3>dead
       //2 nexgen
       //3 live
       //2< dead
       int n = board.size(),m = board[0].size();
       vector<vector<int>> ans(n,vector<int>(m,0));
       for(int i =0;i<n;i++)
       {
           for(int j =0;j<m;j++)
           {
                ans[i][j] = islive(board,i,j);
           }
        //    for(auto var:ans)
        //    {
        //     for(auto s:var) cout<<s<<" ";
        //     cout<<endl;
        //    }
        //    cout<<endl;
       }
       board =  ans;
    }
};