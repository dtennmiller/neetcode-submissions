class Solution {
public:
    void reverseString(vector<char>& s) {
        // solution:
        // to reverse the string in-place 
        // with 0(1) extra memory
        // use 2 references: 1 at the start and 1 at the end of the list
        // while iterating, move the 2 indices towards each other and
        // swap
        // ex. given array [1, 2, 3, 4]:
        // 1. select index 0 and index 3:
        // 2. swap elements at indices:
        // array is now [4, 2, 3, 1]
        // select index 1 and index 2, and swap the elements
        // array is now [4, 3, 2, 1].
        // array reversed.
        int len = s.size();
        for (int i = 0; i < len / 2; i++)
        {
            int x = i; // left index
            int y = (len - 1) - i; // right index
            std::swap(s[x], s[y]); // swap indices
        }
    }
};