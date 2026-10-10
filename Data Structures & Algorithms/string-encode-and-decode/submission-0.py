class Solution:

    def encode(self, strs: List[str]) -> str:
        res = ""
        for s in strs:
            res += str(len(s)) + "@" + s
        return res


    def decode(self, s: str) -> List[str]:
        # "5@Hello5@World"
        res = []
        i = 0
        while i < len(s):
            l = int(s[i:s.index("@", i)])
            
            res.append(s[s.index("@", i) + 1:s.index("@", i) + 1 + l])

            i = s.index("@", i) + l + 1
        return res
