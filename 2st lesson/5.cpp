#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    // kasd
    // s.size() == 4
    // cout << s[2]; s[2] == s
    for(int i = s.size() - 1; i>=0; i--){
        cout << s[i];
    }
}