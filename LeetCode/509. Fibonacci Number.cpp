class Solution {
public:
    int fib(int n) {
        if(n == 0) return 0;
        if(n < 2) return n;
        int first=0;
        int second=1;
        int current;
        for(int i=2 ;i<=n;i++){
            current=first+second;
            first=second;
            second=current;
        }
        return second;
    }
};
