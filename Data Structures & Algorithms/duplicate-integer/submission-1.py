class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        hash = defaultdict(int)
        for num in nums:
            if hash[num]:
                return True
            hash[num] += 1
        return False