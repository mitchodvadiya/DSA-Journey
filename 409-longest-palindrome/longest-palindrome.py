from collections import Counter

class Solution:
    def longestPalindrome(self, s: str) -> int:
        count = Counter(s)

        len = 0
        odd = False

        for freq in count.values():
            len += (freq // 2) * 2

            if freq % 2 == 1:
                odd = True
        if odd:
            len += 1
        return len