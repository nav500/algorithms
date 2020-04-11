#include <iostream>
#include <string>
#include <vector>

int getSwapAndCount(std::vector<int> &pos, std::string &str, int iPos, int i) {
    int cnt = pos[iPos]-i;
    char temp = str[i];
    str[i] = str[pos[iPos]];
    str[pos[iPos]] = temp;
    return cnt;
}

int main() {
    std::string str;
    std::vector<int> pos;
    std::cin >> str;
    int i;
    for(i = 0; i < str.length(); ++i) {
        if(str[i] == '[') {
            pos.push_back(i);      // pos vector is used to store '['
        }
    }
    int sum = 0;    // sum is incremented for every '[' and decremented for every ']'
    int cnt = 0;    // to count every swap
    int iPos = 0;
    for(i = 0; i < str.length(); ++i) {
        if(str[i] == '[') {
            sum++;
            iPos++;
        }
        else {
            sum--;
            if(sum < 0) {
                cnt = cnt + getSwapAndCount(pos, str, iPos,  i);
                iPos++;
                i++;
            }
        }
    }
    std::cout << cnt;
    std::cout << std::endl;
}
