class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        // create copy of nums vector here
        // use vector::insert() here
        // return new vector
        vector<int> ans = nums;

        ans.insert(ans.end(), nums.begin(), nums.end());
        return ans;
    }
};