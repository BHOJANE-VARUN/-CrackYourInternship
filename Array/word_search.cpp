class Solution {
public:
    vector<int> dir = {0,1,0,-1,0};
    int n,m;
    bool valid(int i,int j)
    {
        if(i>=0 and j>=0 and i<n and j<m)
        {
            return true;
        }
        else return false;
    }
    bool check(int i,int j,int cur,vector<vector<char>>&arr,string &word)
    {
     //   cout<<i<<" "<<j<<endl;
        if(cur==word.size())
        {
            return true;
        }
        for(int it =0;it<4;it++)
        {
            int row = i+dir[it],col = j+dir[it+1];
            if(valid(row,col) and word[cur]==arr[row][col])
            {
                arr[row][col] = '#';
                if(check(row,col,cur+1,arr,word))
                {
                    return true;
                }
                arr[row][col] = word[cur];
            }
        }
        return false;
    }
    bool exist(vector<vector<char>>& arr, string word) {
        n = arr.size(),m = arr[0].size();
        for(int i =0;i<n;i++)
        {
            for(int j =0;j<m;j++)
            {
                if(arr[i][j]==word[0])
                {
                    arr[i][j] = '#';
                    if(check(i,j,1,arr,word))
                    return true;
                    arr[i][j] = word[0];
                }
            }
        }
        return false;
    }
};