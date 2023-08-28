#include<iostream>
#include<string>

using namespace std;

int main(){
    int a, b;
    cin >> a>> b;
    a %= 2;
    b %= 2;
    if(a==0 || b==0){
        cout << "Even";
    }
    else{
        cout << "Odd";
    }
    return 0;
}