#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int cnt=0;
    for(int i = 0 ; i < v.size(); i++){
        if(v[i] == v[i+1]){
            cnt++;
            if(v[i+1] == v[i+2]){
                cnt--;
            }
            else continue;
        }
        
    }
    cout << cnt;
}