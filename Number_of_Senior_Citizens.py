from typing import List


class Solution:
    def countSeniors(self, details: List[str]) -> int:
        ans = 0
        for passenger in details:
            age = int(passenger[11:13])
            ans += (age > 60)
        return ans