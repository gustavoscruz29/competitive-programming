#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios::sync_with_stdio(0);cin.tie(0);
 
using namespace std;
 
int main()
{
    fast_io
    int n; cin >> n;
    int h; cin >> h;
    int soma = 0;
    int a[n];
    REP(i,0,n){
        cin >> a[i];
        if((a[i] - h) > 0){
            soma += 2;
        }
        else{
            soma += 1;
        }
    }
    cout << soma;
 
    return 0;
}
