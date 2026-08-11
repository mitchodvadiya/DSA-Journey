class Solution(object):
    def topKFrequent(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        freq = {}
        for num in nums:
            if num in freq:
                freq[num] += 1
            else:
                freq[num] = 1

        sorted_nums = sorted(freq.items(), key=lambda x: x[1], reverse=True)
        ans = []
        for i in range(k):
            ans.append(sorted_nums[i][0])
        return ans