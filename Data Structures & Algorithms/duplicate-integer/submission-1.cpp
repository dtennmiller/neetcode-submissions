class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // make new empty vector x
        // iterate over nums vector
        // if a value isn't in x, add to x
        // if a value is in x, return True;
        // return false after nums is fully iterated through.
        vector<int> x;
        for (int i = 0; i < nums.size(); i++)
        {
            auto it = std::ranges::find(x, nums[i]);
            if (it != x.end())
            {
                return true;
            }
            else
            {
                x.push_back(nums[i]);
            }
        }
        return false;

    }
};