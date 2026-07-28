class Solution {
public:

    TreeNode* solve(vector<int>& nums, int start, int end) {

        if (start > end) {
            return NULL;
        }
        int maxIndex = start;

        for (int i = start; i <= end; i++) {
            if (nums[i] > nums[maxIndex]) {
                maxIndex = i;
            }
        }
        TreeNode* root = new TreeNode(nums[maxIndex]);
        root->left = solve(nums, start, maxIndex - 1);
        root->right = solve(nums, maxIndex + 1, end);
        return root;
    }

    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return solve(nums, 0, nums.size() - 1);
    }
};