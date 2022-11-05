class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";
        for(int i = 0; i < (int)s.size();i++)
        {
            s[i] = tolower(s[i]);
            if(s[i]>='a'&&s[i]<='z'||isdigit(s[i]))
            {
                ans +=s[i];
            }
        }
        for(int i = 0; i < (int)ans.size()/2;i++)
        {
            if(ans[i]!=ans[(int)ans.size()-1-i])
            {
                return false;
            }
        }
        return true;
    }
};