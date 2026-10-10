class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        hash = defaultdict(int)
        for c in s:
            hash[c] += 1
        for c in t:
            hash[c] -= 1

        for k in hash:
            if hash[k] != 0:
                return False
        return True