# 0020. Valid Parentheses
# Language: 🐍 Python

class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        pairs = {')': '(', '}': '{', ']': '['}

        for char in s:  # burada char olarak değiştirdik
            if char in "({[":
                stack.append(char)
            else:
                if not stack or stack[-1] != pairs[char]:
                    return False
                stack.pop()
        
        return not stack
