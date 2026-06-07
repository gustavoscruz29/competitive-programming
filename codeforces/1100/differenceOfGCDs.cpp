#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  fast_io
  
  int t; cin >> t;
  
  while(t--){
    int n, l, r; cin >> n >> l >> r;
    int flag = 0;
    vector<int> a(n);
    REP(i,1,n+1){
      if(((((l-1) / i) + 1) * i) <= r){
        a[i-1] = (((l-1) / i) + 1) * i;
      }
      else{
        flag = -1;
        break;
      }
    }
    if(!flag){
      cout << "YES\n";
      REP(i,0,n) cout << a[i] << " ";
    }
    else cout << "NO";
    cout << "\n";
    
  }
  
  return 0;
}
