class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Positioning method it is used in binary search concept 
        while(nums[0]!=nums[nums[0]]){
            swap(nums[0], nums[nums[0]]);
        }
        return nums[0];
    }
};