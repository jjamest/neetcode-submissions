class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.size() - 1;

        while (left <= right) {
            if (s[left] == ' ' || !isalnum(s[left])) {
                left++;
                continue;
            } else if (s[right] == ' ' || !isalnum(s[right])) {
                right--;
                continue;
            }

            if (tolower(s[left]) != tolower(s[right])) return false;

            left++;
            right--;
        }

        return true;
    }
};
