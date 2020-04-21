/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int x, int y);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        vector<int> dim = binaryMatrix.dimensions();

        int result = -1;
        int x = dim[0] - 1;
        int y = dim[1] - 1;

        while (x >= 0 && y >= 0) {
            if (binaryMatrix.get(x, y) == 1) {
                result = y;
                y -= 1;
            } else {
                x -= 1;
            }
        }
        return result;
    }
};