class Solution:
    def reverseParentheses(self, s: str) -> str:
        lis = list(s)
        ans = ""
        n = len(lis)
        i = 0
        stack = []
        while i < n:
            if lis[i] == '(':
                stack.append(i)
            elif lis[i] == ')':
                start = stack.pop()
                temp = lis[start+1:i]
                temp.reverse()
                lis[start+1:i] = temp
            i += 1
        for c in lis:
            print(c)
            if c != '(' and c != ')':
                ans += c
        return ans