class Solution {
public:
    string reformat(string s) {
        vector<char> chrs;
        vector<char> nums;
        for (int i = 0; i < s.size(); ++i) {
            if (isalpha(s[i])) {
                chrs.push_back(s[i]);
            } else {
                nums.push_back(s[i]);
            }
        }
        int distance = abs((float)chrs.size() - nums.size());
        if (distance > 1) {
            return "";
        }
        string result = "";
        int chrIndex = 0;
        int numIndex = 0;
        if (chrs.size() > nums.size()) {
            for (int i = 0; i < s.size(); ++i) {
                if (i % 2 == 0) {
                    result += chrs[chrIndex];
                    ++chrIndex;
                } else {
                    result += nums[numIndex];
                    ++numIndex;
                }
            }
        } else {
            for (int i = 0; i < s.size(); ++i) {
                if (i % 2 == 1) {
                    result += chrs[chrIndex];
                    ++chrIndex;
                } else {
                    result += nums[numIndex];
                    ++numIndex;
                }
            }
        }
        return result;
    }
};