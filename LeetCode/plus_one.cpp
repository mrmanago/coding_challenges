#include <bits/stdc++.h>

using namespace std;

vector<int> plusOne(vector<int>&);
void printVector(vector<int>);

int main()
{
	vector<int> v1{ 1, 2, 3 };
	vector<int> v2{ 4, 3, 2, 1 };
	vector<int> v3{ 4, 5, 6, 9 };
	vector<int> v4{ 9, 9, 9, 9 };

	printVector(plusOne(v1));
	printVector(plusOne(v2));
	printVector(plusOne(v3));
	printVector(plusOne(v4));

	return 0;
}

vector<int> plusOne(vector<int> &digits) {
	vector<int> result(digits);

	for (int i = digits.size() - 1; i >= 0; --i) {
		if (result[i] < 9) {
			result[i] ++;
			return result;
		}
		result[i] = 0;
	}
	result.push_back(0);
	result[0] = 1;
	return result;
}

void printVector(vector<int> v) {
	for (auto &e : v) {
		cout << e << " ";
	}
	cout << "\n";
}