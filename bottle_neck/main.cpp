#include <iostream>

const int MAX = 1000;

void swap(long arr[2][MAX], int i, int index) {
    long temp;
    temp = arr[0][i];
    arr[0][i] = arr[0][index];
    arr[0][index] = temp;
}

void sort(long arr[2][MAX], long n) {
    long index;
    long min;
    for(long i = 0; i < n-1; ++i) {
        index = i;
        min = arr[0][i];
        for(long j = i+1; j < n; ++j) {
            if(arr[0][i] > arr[0][j] && arr[0][j] < min) {
                index = j;
            }
        }
        swap(arr, i, index);
    }
}

void fit_bottle(long arr[2][MAX], long n) {
    for(long i = 0; i < n-1; ++i) {
        for(long j = i+1; j < n; ++j) {
            if(arr[0][i] < arr[0][j] && arr[1][j] == 0) {
                arr[0][i] = -1;
                arr[0][j] = 1;
                break;
            }
        }
    }
}

int main() {
    long arr[2][MAX] = {0};
    long count = 0;
    long n;
    std::cin >> n;
    
    for(long i = 0; i < n; ++i) {
        std::cin >> arr[0][i];
    }
    sort(arr, n);
    for(long i = 0; i < n; ++i) {
        std::cout << arr[0][i] << " ";
    }
    std::cout << std::endl;
    fit_bottle(arr, n);
    for(long i = 0; i < n; ++i) {
        if(arr[0][i] != -1) {
            count++;
        }
    }
    std::cout << count << std::endl;
    return 0;
}