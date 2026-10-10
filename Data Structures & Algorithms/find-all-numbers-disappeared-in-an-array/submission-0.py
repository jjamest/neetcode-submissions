class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        hash = [0] * (len(nums) + 1)
        for num in nums:
            hash[num] += 1

        res = []
        for h in range(1, len(hash)):
            if hash[h] == 0 and h != 0:
                res.append(h)

        return res