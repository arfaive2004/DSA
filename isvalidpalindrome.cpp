class Solution {
public:
    bool isPalindrome(string &s) {
        s.erase(remove_if(s.begin(), s.end(), [](unsigned char c) 
        {
            return !std::isalnum(c);
        }), s.end());
        transform(s.begin(), s.end(), s.begin(),
        [](unsigned char c) { return std::tolower(c); });
        if (s.empty()) return true;
        for(std::size_t i = 0, j = s.size()-1; i<j; i++, j--)
        {
            if(s[i]!=s[j])
                return false;
        }
        return true;

    }
};