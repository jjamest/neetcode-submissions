class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        sort(numbers.begin(), numbers.end());
        int left = 0, right = numbers.size() - 1;

        for (int i = 0; i < numbers.size(); i++) {
            if (numbers[left] + numbers[right] > target) {
                right--;
            } else {
                if (numbers[left] + numbers[right] == target) {
                    return {left + 1, right + 1};
                } else {
                    left++;
                }
            }
        }
    }
};
