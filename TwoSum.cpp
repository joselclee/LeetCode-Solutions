#include <vector>

class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int v = i + 1; v < nums.size(); v++)
            {
                if (nums[i] + nums[v] == target)
                {
                    return { i,v };
                }
            }
        }
        return {};
    }
};

/*
* 1/20/2023
* 
* Solution runtime stats: 382ms (Beats 42.38%) using 10.2MB (Beats 73.43%)
* 
* Time Complexity: O(n^2)
* Space Complexity: O(1)
*/