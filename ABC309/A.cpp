#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{
    int a,b;
    cin >> a >> b;
    a %= 3;
    b %= 3;
    if(b-a==1||b-a==-2)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
