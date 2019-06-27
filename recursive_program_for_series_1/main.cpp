#include <iostream>

int main() {
    int calc(int n);
    int n;
    std::cout << "enter the value of n: ";
    std::cin >> n;
    std::cout << "sum of series is: " << calc(n) << std::endl;
    return 0;
}

int calc(int n) {
    if (n == 1) {
        return 1;
    }
    else {
        return (n*n)+calc(n-1);

    }
}
