class Solution {
public:
    bool isValid(string s) {
        stack<char> sk;
        for(auto i:s)
        {
            if(i=='(' or i=='{' or i=='[')
            {
                sk.push(i);
            }
            else{
                char cur = i;
                if(i==')')
                {
                    cur--;
                }else cur -= 2;
                if(!sk.size() or sk.top()!=cur)
                {
                    return false;
                }else sk.pop();
            }
        }
        if(sk.size()) return false;
        return true;
    }
};