#include <bits/stdc++.h>

using namespace std;

string defangIPaddr(string);

int main() {

    cout << defangIPaddr("1.1.1.1");
    cout << endl;
    cout << defangIPaddr("255.100.50.0");

    return 0;
}

string defangIPaddr(string address) {
    string result;
    for (const auto& c : address) {
        if (c == '.') {
            result += "[.]";
        } else {
            result.push_back(c);
        }
    }
    return result;
}
