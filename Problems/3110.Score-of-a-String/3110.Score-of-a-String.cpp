class Solution:
    def scoreOfString(self, s: str) -> int:
        final_score = 0
        for i in range(1,len(s)):
            final_score += abs(ord(s[i]) - ord (s[i-1]))
        return final_score 
        
Easy
String
Biweekly Contest 128