class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int arr[1001] = {0};
        vector<int> ans;

        for (int i = 0; i < nums1.size(); i++) {
            arr[nums1[i]]++;
        }

        for (int j = 0; j < nums2.size(); j++) {
            if (arr[nums2[j]] > 0) {
                ans.push_back(nums2[j]);
                arr[nums2[j]]--;
            }
        }
        return ans;
    }
};