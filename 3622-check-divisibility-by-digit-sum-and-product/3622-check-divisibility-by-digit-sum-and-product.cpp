class Solution {
public:
int sum(int n){
    int rem;
    int s = 0;
    while(n){
      rem = n % 10;
      s += rem;
      n = n / 10;
    }
    return s;
}

int prod(int n){
    int rem;
    int p = 1;
    while(n){
        rem = n % 10;
        p *= rem;
        n = n /10;
    }
    return p;
}

    bool checkDivisibility(int n) {
        if ( n % (prod(n)+sum(n)) == 0) return true;
        else return false;
    }
};