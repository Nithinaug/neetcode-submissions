class Solution {
public:
    int guessNumber(int n) {
        int i = 1;
        while (i <= n) {
            int mid = i + (n - i) / 2;
            if (guess(mid) == 0) {
                return mid;
            }
            else if (guess(mid) == 1) {
                i = mid + 1;
            }
            else {
                n = mid - 1;
            }
        }
        return -1;
    }
};
