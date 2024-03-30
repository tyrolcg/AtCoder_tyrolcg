#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool checkSubstring(int W, int B, string S) {
    int gcd = __gcd(W, B);
    int totalLen = W + B + gcd - 1;
    
    if (totalLen > S.length()) {
        return false;
    }

    int countW = count(S.begin(), S.begin() + totalLen, 'w');
    int countB = count(S.begin(), S.begin() + totalLen, 'b');

    return (countW >= W && countB >= B);
}

int main() {
    int W, B;
    cin >> W >> B;

    string Si = "wbwbwwbwbwbwwbw";
    int totalLength = W + B;
    int times = totalLength / Si.length();
    string S = Si;
    for(int i = 0;i<times; i++){
        S += Si;
    }

    if (checkSubstring(W, B, S)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
