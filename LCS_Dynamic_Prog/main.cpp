#include <iostream>

void lcs_length(char str1[], char str2[], int m, int n) {
    m = m+1;
    n = n+1;
    int c[m][n];
    for(int i = 0; i < m; ++i) {
        c[i][0] = 0;
    }
    for(int j = 0; j < n; ++j) {
        c[0][j] = 0;
    }
    for(int i = 1; i < m; ++i) {
        for(int j = 1; j < n; ++j) {
            if(str1[i-1] == str2[j-1]) {
                c[i][j] = c[i-1][j-1]+1;
            }
            else {
                if(c[i-1][j] > c[i][j-1]) {
                    c[i][j] = c[i-1][j];
                }
                else {
                    c[i][j] = c[i][j-1];
                }
            }
        }
    }
    std::cout << c[m-1][n-1] << std::endl; // last character of the matrix c
    
    // priting the LCS
    int i = m-1;
    int j = n-1;
    int len = c[m-1][n-1];
    char lcs[len+1];
    int k = 0;
    while(c[i][j] > 0) {
        if (c[i][j] == c[i-1][j]) {
            i=i-1;
        }
        else if(c[i][j] == c[i][j-1]) {
            j=j-1;
        }
        else {
            lcs[k] = str1[i-1];
            k++;
            i = i-1;
            j = j-1;
        }
        
    }
    std::cout << lcs[k-1];
    for(k = len-2; k >= 0; k--) {
        std::cout << lcs[k];
    }
}

int main() {
    char str1[] = "longest";
    char str2[] = "stone";
    int m = sizeof(str1)/sizeof(str1[1]) - 1; // as string append '\0' at the end
    int n = sizeof(str2)/sizeof(str2[1]) - 1;
    lcs_length(str1, str2, m, n);
    return 0;
}