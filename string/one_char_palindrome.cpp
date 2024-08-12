class Solution {
public:
    bool check(string &s,int i,int j,int &f)
    {
        if(i>=j) return true;

        if(s[i]==s[j])
        {
            return check(s,i+1,j-1,f);
        }
        else if(f==1)
        {
            f =0;
            return (check(s,i+1,j,f) or check(s,i,j-1,f));
        }
        return false;
    }
    bool validPalindrome(string s) {
        int f =1;
        return check(s,0,s.size()-1,f);
    }

};