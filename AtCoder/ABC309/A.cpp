#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{
    int a, b;
    cin >> a >> b;
    if (a % 3 != 0 && b - a == 1){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}
