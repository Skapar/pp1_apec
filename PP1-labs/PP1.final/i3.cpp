#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    for(int i = 0 ; i < n ; i ++){
        int sum = 0;
        for(int j = 0 ; j < m ; j++){
            sum += a[i][j];
        }
        if(sum == 0){
            cnt++;
        }
    }
    cout << cnt;
}