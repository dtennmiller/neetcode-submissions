class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        string shortest;
        int len = 250;
        for (const auto& str : strs)
        {
            if (str.size() < len)
            {
                len = str.size();
                shortest = str;
            }
        }
       
        for (int i = 0; i < len; i++)
        {
            for (const auto& str : strs)
            {
                if (str[i] != shortest[i])
                {
                    return ans;
                }
            }
            ans = ans + shortest[i];
        }
        return ans;
       
    }
};