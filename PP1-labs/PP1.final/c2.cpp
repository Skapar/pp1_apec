#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 0 ; i < s.size(); i++){
        if(s[i] == '3' && s[i+1] == '7' && s[i+2] == '5'){
            cnt++;
        }
    }
    cout << cnt;
}