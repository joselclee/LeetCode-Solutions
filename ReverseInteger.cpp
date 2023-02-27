class Solution {
public:
    int reverse(int x) {
        int y = 0;
        while (x) {
            if (y > INT_MAX / 10 || y < INT_MIN / 10) {
                return 0;
            }
            else {
                y = y * 10 + x % 10;
                x /= 10;
            }
        }
        return y;
    }
};

/*
* 1/23/2023
*
* Solution runtime stats: 3ms (Beats 57.11%) using 6MB (Beats 12.65%)
*
* Time Complexity: O(log n)
* Space Complexity: O(1)
*/