
#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int uniq_pointer = 1;   // указывает на элемент следующий за последним уникальный

        if (nums.size() == 1) return uniq_pointer;

        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] > nums[i - 1])
            {
                nums[uniq_pointer] = nums[i];
                uniq_pointer++;
            }
        }

        return uniq_pointer;
    }
};


int main()
{
    vector<int> nums = {1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4};

    Solution sol;
    int k = sol.removeDuplicates(nums);

    cout << k << endl;
    for (auto n : nums)
        cout << n << " ";

    return 0;
}
