class Solution {
public:
    bool checkDivisibility(int n) {
        int a=0, b=1;
        for(int x=n; x>0; x/=10){
            const int r=x%10;
            a+=r;
            b*=r;
        }
        return n%(a+b)==0;
    }
};