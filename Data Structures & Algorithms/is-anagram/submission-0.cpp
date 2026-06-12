class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() == t.length())
        {
            if(std::is_permutation(s.begin(), s.end(), t.begin(), t.end()))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        return false;
    }
};
