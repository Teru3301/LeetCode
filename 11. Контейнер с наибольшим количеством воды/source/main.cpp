
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;


class Solution {
public:
    int maxArea(vector<int>& height) {
        vector<int> volume;

        int current_height = 1;
        int i = 0;
        int j = height.size() - 1;
        while (i <= j)
        {
            for (; i < height.size() - 1; i++)
                if (height[i] >= current_height)
                    break;
            for (; j > 0; j--)
                if (height[j] >= current_height)
                    break;
            volume.push_back((j - i) * current_height);
            current_height++;
            cout << volume[volume.size() - 1] << endl;
        }

        sort(volume.begin(), volume.end());
        return volume[volume.size() - 1];
    }
};


int main()
{
    vector<int> height = {1,8,6,2,5,4,8,3,7};

    Solution sol;
    int result = sol.maxArea(height);

    cout << result << endl;

    return 0;
}

