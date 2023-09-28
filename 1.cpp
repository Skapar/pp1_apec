#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
    cin >> a >> b;
    // 1782 91
    // 7 + 8 + 1 = 16 

    // 1322 / 100

    int peredposled = a/10%10;
    int cifr = a/100 % 10;
    cout << peredposled + cifr + b % 10;
    
    
}