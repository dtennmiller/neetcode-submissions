class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> intMap;
        for (const auto& num : nums)
        {
            intMap[num]++;
        }

        for (const auto& [num, freq] : intMap)
        {
            if (freq > (nums.size() / 2))
            {
                return num;
            }
        }
    }
};