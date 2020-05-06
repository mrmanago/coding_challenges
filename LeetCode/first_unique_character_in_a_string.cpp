class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> sHash(26, 0);
        for (int i = 0; i < s.size(); ++i) {
            sHash[s[i] - 'a'] += 1;
        }

        for (int i = 0; i < s.size(); ++i) {
            if (sHash[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
};