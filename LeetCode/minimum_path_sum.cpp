#include <bits/stdc++.h>

using namespace std;

int minPathSum(vector<vector<int>>& grid);

int main()
{
    vector<vector<int>> twoDimVector =
    {
        {1, 3, 1},
        {1, 5, 1},
        {4, 2, 1}
    };
    cout << minPathSum(twoDimVector);
    return 0;
}

int minPathSum(vector<vector<int>>& grid) {
    if (grid.size() == 0) {
        return 0;
    }
    if (grid.size() == 1 && grid[0].size() == 1) {
        return grid[0][0];
    }

    int m = grid.size();
    int n = grid[0].size();
    vector<vector<int>> matrix(m, vector<int>(n, 0));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            matrix[i][j] += grid[i][j];
            if (i > 0 && j > 0) {
                matrix[i][j] += min(matrix[i - 1][j], matrix[i][j-1]);
            } else if (i > 0) {
                matrix[i][j] += matrix[i - 1][j];
            } else if (j > 0) {
                matrix[i][j] += matrix[i][j - 1];
            }
        }
    }

    return matrix[m-1][n-1];
}