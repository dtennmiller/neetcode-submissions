class Solution {
public:
    bool isPalindrome(string s) {
        // to check if a string is a palindrome:
        // delete all non-alphanumeric characters
        // iterate from the front and back of the string
        // on each iteration
        std::erase_if(s, [](unsigned char c)
        {
            return !std::isalnum(c);
        });

        for (int i = 0; i < (s.size() / 2); i++)
        {
            int j = s.size() - i - 1;

            char c1 = std::tolower(s[i]);
            char c2 = std::tolower(s[j]);
            if (c1 != c2)
            {
                return false;
            }
        }
        return true;
    }
};
