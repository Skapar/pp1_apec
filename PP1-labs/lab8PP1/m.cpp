#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    set<int> s;
    set<int>:: iterator it;
    int sum = 0;
    for(int i = 0 ; i < n; i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    for(it = s.begin() ; it != s.end(); it++){
        sum += *it;
    }
    cout << sum;
   
}
