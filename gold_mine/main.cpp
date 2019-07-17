#include <iostream>

int max(int a, int b, int c) {
	if(a > b) {
		if (a > c) {
			return a;
		}
		else {
			return c;
		}
	}
	else {
		if(b > c) {
			return b;
		}
		else {
			return c;
		}
	}
}

int get_gold_mine_sum(int arr[4][4], int i, int j, int m, int n) {
	if(i <= m-1 && j == n-1) {
		return arr[i][j];
	}
	else if(i < 0) {
		return 0;
	}
	return max(arr[i][j]+get_gold_mine_sum(arr, i-1, j+1, m, n), arr[i][j]+get_gold_mine_sum(arr, i, j+1, m, n), arr[i][j]+get_gold_mine_sum(arr, i+1, j+1, m, n));
}

int gold_mine(int arr[4][4], int m, int n) {
	int sum = 0;
	int val;
	for(int i = 0; i < m; ++i) {
		val = get_gold_mine_sum(arr, i, 0, m, n);
		if (val > sum) {
			sum = val;
		}
	}
	return sum;
}

int main() {
	int gold[4][4]= { {1, 3, 1, 5},
	        {2, 2, 4, 1},
	        {5, 0, 2, 3},
	        {0, 6, 1, 2}
	    };
	int m = 4;
	int n = 4;
	std::cout << gold_mine(gold, m, n);
	std::cout << "he";
	return 0;
}
