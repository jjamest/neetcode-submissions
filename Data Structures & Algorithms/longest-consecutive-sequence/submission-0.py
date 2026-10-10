class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        numSet = set(nums)
        longest = 0

        for num in numSet:
            if num - 1 not in numSet:
                # start of a new sequence
                length = 1
                while (num + length) in numSet:
                    length += 1

                longest = max(longest, length)
        return longest
            # 1 2 3 4 5