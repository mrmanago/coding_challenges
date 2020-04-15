#include <bits/stdc++.h>

using namespace std;

vector<int> productExceptSelf(vector<int>& nums);
void printVector(vector<int> v);

int main()
{
	vector<int> v1 = { 1,2,3,4 };
	printVector(productExceptSelf(v1));

	return 0;
}

vector<int> productExceptSelf(vector<int>& nums) {
	int n = nums.size();
	vector<int> left(n, 0);
	vector<int> right(n, 0);

	int x;
	for (int i = 0; i < n; ++i) {
		if (i == 0) {
			left[i] = 1;
		} else {
			left[i] = x * left[i - 1];
		}
		x = nums[i];
	}

	for (int i = n - 1; i >= 0; --i) {
		if (i == n - 1) {
			right[i] = 1;
		} else {
			right[i] = x * right[i + 1];
		}
		x = nums[i];
	}

	vector<int> result(n, 0);
	for (int i = 0; i < n; ++i) {
		result[i] = left[i] * right[i];
	}

	return result;
}

void printVector(vector<int> v) {
	for (auto& e : v) {
		cout << e << " ";
	}
	cout << "\n";
}