#include <iostream>

long min(long a, long b, long c) {
    if (a < b) {
        if (a < c) {
            return a;
        }
        else {
            return c;
        }
    }
    else {
        if (b < c) {
            return b;
        }
        else {
            return c;
        }
    }
}

long get_ugly_num(int n) {
    long ugly[n];
    ugly[0] = 1;
    int i2 = 0, i3 = 0, i5 = 0;
    long next_multiple_2, next_multiple_3, next_multiple_5;
    long next_ugly_num;
    next_multiple_2 = ugly[i2]*2;
    next_multiple_3 = ugly[i2]*3;
    next_multiple_5 = ugly[i2]*5;
    for(int i = 1; i < n; ++i) {
        next_ugly_num = min(next_multiple_2, next_multiple_3, next_multiple_5);
        ugly[i] = next_ugly_num;
        
        if(next_ugly_num == next_multiple_2) {
            i2++;
            next_multiple_2 = ugly[i2]*2;
        }
        
        if(next_ugly_num == next_multiple_3) {
            i3++;
            next_multiple_3 = ugly[i3]*3;
        }
        
        if(next_ugly_num == next_multiple_5) {
            i5++;
            next_multiple_5 = ugly[i5]*5;
        }
        
    }
    return next_ugly_num;
}

int main() {
    int n;
    std::cout << "enter the number: ";
    std::cin >> n;
    std::cout << n << "th ugly number is: " << get_ugly_num(n);
    return 0;
}