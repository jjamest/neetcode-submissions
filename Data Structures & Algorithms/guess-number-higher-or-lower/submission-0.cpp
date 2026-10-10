/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int left = 1, right = n;
        int mid = (left + right) / 2;

        while (left <= right) {
            int result = guess(mid);

            if (result == 0) {
                return mid;
            } else if (result == 1) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }

            mid = (left + right) / 2;
        }
    }
};