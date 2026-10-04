class Solution {
public:
    bool isHappy(int n) {
          unordered_set<int> usedIntegers;

        while (true) {

            int sum = 0;

            while (n != 0) {
                int digit = n % 10;
                sum += digit * digit;
                n = n / 10;
            }

            if (sum == 1)
                return true;

            n = sum;

            if (usedIntegers.count(n))
                return false;

            usedIntegers.insert(n);
        }
    }
};