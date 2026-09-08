class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int total = 0;
        for (int i = 0; i < n; i++) {
            total += nums[i];
        }
        int st = 0;
        for (int i = 0; i < n; i++) {
            int end = total - st - nums[i];
            if (st == end) {
                return i;
            }
            st += nums[i];
        }
        return -1;
    }
};