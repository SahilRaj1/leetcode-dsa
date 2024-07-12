class Solution:
    def minOperations(self, logs: List[str]) -> int: # type: ignore
        ans = 0
        for log in logs:
            if len(log) == 3 and log[0] == '.':
                if ans > 0:
                    ans -= 1
            elif len(log) == 2 and log[0] == '.':
                pass
            else:
                ans += 1
        return ans
