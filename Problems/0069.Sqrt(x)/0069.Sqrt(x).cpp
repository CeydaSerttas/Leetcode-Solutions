class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x;
        long long left = 2, right = x / 2;
        long long mid, num;

        while (left <= right) {
            mid = left + (right - left) / 2;
            num = mid * mid;

            if (num == x) return mid;
            else if (num < x) left= mid + 1;
            else right = mid - 1;
        } 
        return right;
    }
};