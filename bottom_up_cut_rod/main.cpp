#include <iostream>

int maximum(int a, int b) {
    return  (a > b) ? a : b;
}

int bottom_up_cut_rod(int prices[], int n) {
    int r[n+1];
    r[0] = 0;
    for(int i = 1; i <= n; ++i) {
        int q = -1;
        for(int j = 1; j <= i; ++j) {
            q = maximum(q, prices[j-1]+r[i-j]);
        }
        r[i] = q;
    }
    return r[n];
}

int main() {
    int prices[] = {1, 5, 8, 9, 10, 17, 17, 20};  //
    int length = sizeof(prices)/sizeof(prices[0]);
    std::cout << "the maximum revenue is: " << bottom_up_cut_rod(prices, length) << std::endl;
    return 0;
}
