class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string cur = strs[0];
        for(int i =1;i<strs.size();i++)
        {
            string temp = "";
            for(int j =0;j<min(cur.size(),strs[i].size());j++)
            {
                if(cur[j]==strs[i][j])
                {
                    temp += cur[j];
                }
                else {break;}
            }
            cur = temp;
        }
        return cur;
    }
};