#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
    cin >> a >> b;

    if(a+b == 300){
        cout << 1;
    }
    else if(a%b == 1){
        cout << 2;
    }
}