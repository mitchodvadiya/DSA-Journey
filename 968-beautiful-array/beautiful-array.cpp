class Solution {
public:
    vector<int> beautifulArray(int n) {
        vector<int> ans;
        ans.push_back(1);

        while (ans.size() < n) {
            vector<int> temp;

            for (int i = 0; i < ans.size(); i++) {
                if (2 * ans[i] - 1 <= n) {
                    temp.push_back(2 * ans[i] - 1);
                }
            }

            for (int i = 0; i < ans.size(); i++) {
                if (2 * ans[i] <= n) {
                    temp.push_back(2 * ans[i]);
                }
            }
            ans = temp;
        }
        return ans;
    }
};