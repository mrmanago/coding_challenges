class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        vector<int> magHash(26, 0);
        for (int i = 0; i < magazine.size(); ++i) {
            magHash[magazine[i] - 'a'] += 1;
        }

        for (int i = 0; i < ransomNote.size(); ++i) {
            if (magHash[ransomNote[i] - 'a'] == 0) {
                return false;
            } else {
                --magHash[ransomNote[i] - 'a'];
            }
        }
        return true;
    }
};