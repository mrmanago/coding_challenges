class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        vector<int> fib = { 1, 1 };
        int i = 1;
        while (fib[i] < k) {
            int nextFib = fib[i] + fib[i - 1];
            fib.push_back(nextFib);
            ++i;
        }
        int n = fib.size();
        if (k == fib[n - 1]) {
            return 1;
        }
        int sum = 0;
        int cnt = 0;
        for (int i = n - 1; i >= 0; --i) {
            if (sum + fib[i] < k) {
                sum += fib[i];
                ++cnt;
            } else if (sum + fib[i] == k) {
                return ++cnt;
            }
        }

        return 1;
    }
};