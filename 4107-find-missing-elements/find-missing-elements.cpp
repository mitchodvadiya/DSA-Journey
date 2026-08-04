class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int small = nums[0];
        int large = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < small)
                small = nums[i];

            if (nums[i] > large)
                large = nums[i];
        }
        vector<int> ans;

        for (int i = small; i <= large; i++) {
            bool found = false;

            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] == i) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};