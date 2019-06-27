#include <iostream>

int main() {
    int cut_rod(int prices[], int n);
    int prices[] = {0, 3, 5, 8, 9, 10, 17, 17, 20};
    int length = sizeof(prices)/sizeof(prices[0]);
    std::cout << "the maximum revenue is: " << cut_rod(prices, length-1) << std::endl;
    return 0;
}

int cut_rod(int prices[], int n) {
    int maximum(int a, int b);
    if(n == 0) {
        return 0;
    }
    int q = -1;
    for(int i = 1; i <= n; ++i) {
        q = maximum(q, prices[i]+cut_rod(prices, n-i));
    }
    return q;
}

int maximum(int a, int b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}
