#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    cout <<setprecision(10)<< std::pow(a,b) + std::pow(b,a);
    
    return 0;
}