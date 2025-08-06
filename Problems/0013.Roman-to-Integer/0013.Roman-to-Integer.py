class Solution:
    def romanToInt(self, s: str) -> int:
        roman = {
            'I' : 1,
            "V" :5,
            "X" : 10,
            "L" : 50,
            "C" : 100,
            'D' : 500,
            "M" : 1000,
        }

        total = 0
        prev_v = 0

        for char in s:
            current_v = roman[char]
            if current_v > prev_v:
                total += current_v - 2 * prev_v
            else:
                total += current_v
            prev_v = current_v
        
        return total
    
//topics:
Easy Hash Table Math String