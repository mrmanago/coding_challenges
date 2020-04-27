#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int entries = 0;
    cin >> entries;
    map<string, int> addressBook;

    for (int i = 0; i < entries; ++i) {
        string name;
        int phoneNumber;
        cin >> name >> phoneNumber;
        addressBook[name] = phoneNumber;
    }

    string name;
    while (cin >> name) {
        if (addressBook[name]) {
            cout << name << "=" << addressBook[name] << endl;
        } else {
            cout << "Not found" << endl;
        }
    }

    return 0;
}