class Solution:
    def isPalindrome(self, s: str) -> bool:
        # remove all spaces
        # remove all alphanumerics
        # one pointer at the start of the string
        # one pointer at the end of the string
        # move towards middle, until left does not equal right
        # for c in s:
        #     if c.isalnum()
        s = s.lower()
        left = 0
        right = len(s)-1
        while not s[left].isalnum() and left < len(s) - 1:
            left = left + 1
        while not s[right].isalnum() and right > 0:
            right = right - 1       

        while left < right and s[left] == s[right]:
            left = left + 1
            right = right - 1
            while not s[left].isalnum() and left < len(s) - 1:
                left = left + 1
            while not s[right].isalnum() and right > 0:
                right = right - 1
        print(left)
        print(right)
        if left < right:
            return False
        return True