#include <iostream>

using namespace std;

int main(){
    int g;
    cin >> g;

    int cntOrel = 0;
    int cntRewka = 0;
    for(int i = 0; i<g; i++){
        int d;
        cin >> d;
        if(d==1){
            cntOrel = cntOrel + 1;
        }
        else{
            cntRewka= cntRewka + 1;
        }
        
    }
    if(cntOrel>cntRewka){
        cout << cntRewka;
    }
    else{
        cout << cntOrel;
    }
    return 0;
}