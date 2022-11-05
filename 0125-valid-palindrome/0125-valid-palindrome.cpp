class Solution {
public:
    bool isPalindrome(string s) {
        deque <char> dq;
        for(auto ch : s)
        {
            ch = tolower(ch);
            if(ch>='a'&&ch<='z'||isdigit(ch))
            {
                    dq.push_back(ch);
            }
        }
        while(dq.size() > 1)
        {
            char first = dq.front(), last = dq.back();
            dq.pop_back();dq.pop_front();
            if(first != last)
            {
                return false;
            }
        }
        return true;
    }
};