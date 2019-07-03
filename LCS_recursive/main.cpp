#include <iostream>

int max(int x, int y) {
    return x > y ? x:y;
}

int lcs(int i, int j, char a[], char b[]) {
    if(a[i] == '\0' || b[j] == '\0') 
        return 0;
    else if(a[i] == b[j])
        return 1+lcs(i+1, j+1, a, b);
    else
        return max(lcs(i+1, j, a, b), lcs(i, j+1, a, b));
}

int main() {
    char a[] = "abcbdab";
    char b[] = "bdbadc";
    std::cout << "LCS is: " << lcs(0, 0, a, b);
    return 0;
}