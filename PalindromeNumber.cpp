#include <vector>
class Solution {
public:
    bool isPalindrome(int x) {
        unsigned int y = 0;
        int s = x;
        if (s < 0) {
            return false;
        }
        while (x) {
            y = y * 10 + x % 10;
            x /= 10;
        }
        if (y == s) {
            return true;
        }
        else {
            return false;
        }
        return {};
    }
};

/*
* 2/27/2023
*
* Solution runtime stats: 12ms (Beats 77.87%) using 6MB (Beats 62.48%)
*
* Time Complexity: O(log n)
* Space Complexity:O(1)
*/