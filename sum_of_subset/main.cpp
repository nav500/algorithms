#include <iostream>

int sum_of_subset(int arr[], int total, int i) {
    if(total == 0) {
        return 1;
    }
    if(i < 0) {
        return 0;
    }
    if(total < 0) {
        return 0;
    }
    return sum_of_subset(arr, total-arr[i], i-1) + sum_of_subset(arr, total, i-1);
}

int main() {
    
    // sample test case
    // int arr[] = {2, 4, 6, 10};
    // int total = 16;
    // int i = 3;
    
    // user input
    int n;
    int total;
    std::cout << "enter the number of elements in set: ";
    std::cin >> n;
    int arr[n];
    std::cout << "enter the elements: " << std::endl;
    for(int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    std::cout << "enter the desired sum: ";
    std::cin >> total;
    std::cout << sum_of_subset(arr, total, n-1) << std::endl;
    return 0;
}