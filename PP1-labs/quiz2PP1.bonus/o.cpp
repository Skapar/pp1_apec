#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int a[n][m];
    int cnt = 0;
    for(int i = 0 ; i < n;i++){
        for(int j = 0 ;j < m ;j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0 ; i < n;i++){
        int sum = 0;
        int x;
        for(int j = 0 ;j < m ;j++){
            sum += a[i][j];
            x = sum / m;
        }
        cout << x << " ";
    }

}