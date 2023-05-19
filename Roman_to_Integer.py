class Solution:
    def romanToInt(self, s: str) -> int:
        roman = {"I":1, "V":5, "X":10, "L":50, "C":100, "D":500, "M":1000}
        final_num = 0
        prev = 0
        for i in s:
            int_num = roman[i]
            final_num += roman[i]
            if prev < int_num:
                final_num -= 2*prev
            prev = int_num
        return final_num