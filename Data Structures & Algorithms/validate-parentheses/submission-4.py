class Solution:
    def isValid(self, s: str) -> bool:
        stack = []

        p = {
            "(": ")",
            "[": "]",
            "{": "}"
        }

        for bracket in s:
            if bracket in list(p.keys()):
                stack.append(bracket)
            else:
                if stack and stack[-1] in p and p[stack[-1]] == bracket:
                    stack.pop()
                else:
                    stack.append(bracket)
        return stack == []