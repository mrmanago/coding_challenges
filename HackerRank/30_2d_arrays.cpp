#include <bits/stdc++.h>

using namespace std;



int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);
        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int sum;
    int max;
    for (int i = 0; i < 4; ++i) {
        for (int j = 1; j < 5; ++j) {
            sum = arr[i][j - 1] + arr[i][j] + arr[i][j + 1]
                + arr[i + 1][j]
                + arr[i + 2][j - 1] + arr[i + 2][j] + arr[i + 2][j + 1];
            if (sum > max) max = sum;
            if (i == 0 && j == 1) max = sum;
        }
    }

    cout << max;

    return 0;
}