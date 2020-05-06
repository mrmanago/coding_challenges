class Solution {
public:
    int findComplement(int num) {
        int complement = 0;
        int i = 0;
        while (num) {
            if ((num & 1) == 0) {
                complement += 1 << i;
            }
            ++i;
            num >>= 1;
        }
        return complement;
    }
};