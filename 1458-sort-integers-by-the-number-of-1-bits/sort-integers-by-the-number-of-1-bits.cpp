class Solution {
public:
    int one(int n) {
        int count = 0;
        while (n > 0) {
            count += n % 2;
            n = n / 2;
        }
        return count;
    }

    vector<int> sortByBits(vector<int>& a) {

        for (int i = 0; i < a.size(); i++) {
            for (int j = i + 1; j < a.size(); j++) {

                int x = one(a[i]);
                int y = one(a[j]);

                if (x > y || (x == y && a[i] > a[j])) {
                    swap(a[i], a[j]);
                }
            }
        }
        return a;
    }
};