class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()>haystack.size()) return -1;
        unordered_map<string,int> mp;
        mp[needle] = 1;
        string cur;
        for(int i =0;i<haystack.size();i++)
        {
            if(i<needle.size())
            {
                cur.push_back(haystack[i]);
            }
            else{
                if(mp[cur])
                {
                    return i-cur.size();
                }
                cur.erase(0,1);
                cur.push_back(haystack[i]);
            }
        }
        if(mp[cur])
        {
            return haystack.size()-cur.size();
        }
        return -1;
    }
};