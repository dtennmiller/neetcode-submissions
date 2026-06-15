class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // the number of elements that are not equal to val
        int k = 0;
        // the size of the array
        int len = nums.size();
        for (const auto& num : nums)
        {
            if (num != val)
            {
                k++; // increment for each num that isn't equal to val
            }
        }
        // the amount of entries that are equal to val
        int x = len - k;
        erase(nums, val); // erase all instances of val
        for(int i = 0; i < x; i++)
        {
            nums.push_back(val); // append val to end of list.
        }
        return k;
    }
};