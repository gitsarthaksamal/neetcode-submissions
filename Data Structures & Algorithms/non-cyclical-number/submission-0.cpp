class Solution {
public:
    bool isHappy(int n) {
        int slow=n;
        int fast=sumofsq(n);
        while(fast!=1 && slow!=fast){
            slow=sumofsq(slow);
            fast=sumofsq(sumofsq(fast));
        }
        return fast==1;
    }
    private:
    int sumofsq(int n){
        int sum=0;
        while(n>0){
            int d=n%10;
            sum+=d*d;
            n/=10;
        }
        return sum;
    }
};
