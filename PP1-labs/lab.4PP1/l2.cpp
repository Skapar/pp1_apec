#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n , m;
    cin >> n >> m;
    int arr[n][m];
    
     for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < m ; j ++){
            cin >> arr[i][j];
        }
    }
     for(int i = 0 ; i < n ; i ++){
        int mini = 9999;
        int j = 0;
        for( j  ; j < m ;){
            mini = min(mini, arr[i][j]);
        }
        cout << mini << " ";
        j++;
    }
}