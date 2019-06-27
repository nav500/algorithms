// fibonacci number using dynamic programming

#include <iostream>

int main() {
    int fibonacci(int n, int arr[]);
    int n;
    std::cout << "enter the term: ";
    std::cin >> n;
    int arr[n+1];
    std::cout << "the fibonacci number is: " << fibonacci(n, arr);
    return 0;
}

int fibonacci(int n, int arr[]) {
    arr[1] = arr[2] = 1;
    for (int i = 3; i <= n; ++i) {
        arr[i] = fibonacci(i-1, arr)+fibonacci(i-2, arr);
    }
    return arr[n];
}
