#include <bits/stdc++.h>

using namespace std;

int dominantIndex(vector<int>&);

int main()
{
	vector<int> vec1 = { 3, 6, 1, 0 };
	vector<int> vec2 = { 1, 2, 3, 4 };
	vector<int> vec3 = {};
	vector<int> vec4 = { 1 };
	vector<int> vec5 = {3, 9, 5, 4};

	cout << dominantIndex(vec1) << endl;
	cout << dominantIndex(vec2) << endl;
	cout << dominantIndex(vec3) << endl;
	cout << dominantIndex(vec4) << endl;
	cout << dominantIndex(vec5) << endl;
}

int dominantIndex(vector<int> &nums) {
	if (nums.size() == 0) return -1;
	if (nums.size() == 1) return 0;
	
	vector<int> sortedNums = nums;

	sort(sortedNums.begin(), sortedNums.end());

	int largestPosition = 0;
	for (int i = 0; i != nums.size(); ++i) {
		if (nums[i] == sortedNums[sortedNums.size() - 1]) {
			largestPosition = i;
			break;
		}
	}

	for (int i = 0; i != nums.size(); ++i) {
		if (nums[i] > (nums[largestPosition] / 2) && i != largestPosition) {
			return -1;
		}
	}

	return largestPosition;
}