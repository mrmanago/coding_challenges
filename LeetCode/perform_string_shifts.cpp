#include <bits/stdc++.h>

using namespace std;

string stringShift(string s, vector<vector<int>>& shift);

int main()
{
    string str1 = "abc";
    vector<vector<int>> vec1 = { {0,1},{1,2} };
    cout << stringShift(str1, vec1) << endl;

    string str2 = "abcdefg";
    vector<vector<int>> vec2 = { {1,1}, {1,1}, {0,2}, {1,3} };
    cout << stringShift(str2, vec2) << endl;

    string str3 = "yisxjwry";
    vector<vector<int>> vec3 = { {1,8}, {1,4}, {1,3}, {1,6}, {0,6}, {1,4}, {0,2}, {0,1} };
    cout << stringShift(str3, vec3) << endl;

	return 0;
}

string stringShift(string s, vector<vector<int>>& shift) {
    int v = 0;
    for (int i = 0; i != shift.size(); ++i) {
        if (shift[i][0] == 0) {
            v -= shift[i][1];
        } else {
            v += shift[i][1];
        }
    }

    int length = s.length();
    if (v > length || v < -length) {
        v %= length;
    } 

    string result = "";

    if (v > 0) {
        result = s.substr(length - v, v) + s.substr(0, length - v);
    } else {
        result = s.substr(-v, length + v) + s.substr(0, -v);
    }

    return result;
}