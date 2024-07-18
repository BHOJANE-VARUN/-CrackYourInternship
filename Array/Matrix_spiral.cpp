class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
            vector<int> ans;
    int n = matrix.size(),m = matrix[0].size();
    int top = 0;
    int down =n-1;
    int left = 0;
    int right =m-1;
    int count = 0;
    while (left<=right && top<=down)
    {   
    for (int i = left; i < right+1; i++)
    {  
    
        ans.push_back(matrix[top][i]);
        count++;
    }
    if(count>=(m*n))
    {
        break;
    };
    for (int j = top+1; j < down; j++)
    {
        ans.push_back(matrix[j][right]);
        count++;
    }
    if(count>=(m*n))
    {
        break;
    };
    for (int k = right;k >= left; k--)
    {
        ans.push_back(matrix[down][k]);
        count++;
    }
    if(count>=(m*n))
    {
        break;
    };
    for (int l = down-1; l > top; l--)
    {
        ans.push_back(matrix[l][left]);
        count++;
    }
    if(count>=(m*n))
    {
        break;
    };
    top++;
    down--;
    left++;
    right--;

    } 
    return ans;
    }
};