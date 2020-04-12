#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int pivotIndex(vector<int>&);

int main()
{
    vector<int> v1 = { 1, 7, 3, 6, 5, 6 };
    vector<int> v2 = { 0 };
    vector<int> v3 = { 1, 2, 3 };
    vector<int> v4 = { -1, -1, -1, -1, -1, 0 };
    vector<int> v5 = { -1, -1, -1, 0, 1, 1 };

    cout << pivotIndex(v1) << endl;
    cout << pivotIndex(v2) << endl;
    cout << pivotIndex(v3) << endl;
    cout << pivotIndex(v4) << endl;
    cout << pivotIndex(v5) << endl;

    return 0;
}

int pivotIndex(vector<int> &nums) {
    if (nums.size() == 1) {
        return nums[0];
    }
    
    int total = 0;

    for (int i = 0; i < nums.size(); ++i) {
        total += nums[i];
    }

    int lsum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        if (lsum == total - lsum - nums[i]) {
            return i;
        }
        lsum += nums[i];
    }

    return -1;
}