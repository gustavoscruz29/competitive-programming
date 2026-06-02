#include <bits/stdc++.h>
#define f_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
typedef long long ll;

using namespace std;

int main(){
  
  int t; cin >> t;
  while(t--){
    int n, k; cin >> n >> k;
    vector<vector<int>> a(n, vector<int>(n));
    REP(i,0,n){
      REP(j,0,n){
        cin >> a[i][j]; 
      }
    }
    
    int op = 0;
    
    REP(i,0,n/2){
      REP(j,0,n){
        if(a[i][j] != a[n-1-i][n-1-j]) op++;
      }
    }
    
    if(n % 2 == 1){
      REP(i,0,n/2){
        if(a[n/2][i] != a[n/2][n-i-1]) op++;
      }
    }
    
    if(op == k) cout << "YES\n";
    else{
      if (op < k){
        int dif = k - op;
        if(n % 2 == 1){
          cout << "YES\n";
        }
        else{
          if(dif % 2 == 1) cout << "NO\n";
          else cout << "YES\n";
        }
      }
      else cout << "NO\n";
    }
    
    
  }
  return 0;
}
