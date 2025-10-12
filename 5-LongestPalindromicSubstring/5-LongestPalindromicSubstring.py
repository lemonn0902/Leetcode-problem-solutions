# Last updated: 10/12/2025, 1:19:17 PM
class Solution(object):
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: str
        """
        if not s:
            return ""
        def f(s, left, right):
            while(left>=0 and right<len(s) and s[left]==s[right]):
                left-=1
                right+=1
            return right-left-1
        start=0
        end=0
        for i in range(len(s)):
            odd= f(s,i,i)
            even=f(s,i,i+1)
            max_len=max(odd,even)
            if max_len>end-start:
                start= i-(max_len-1)//2
                end=i+max_len//2
        return s[start:end+1]

        