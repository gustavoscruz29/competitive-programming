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
    int n; cin >> n;
    vector<ll> cont(n+1,0);
    vector<ll> b(n);
    REP(i,1,n+1){
      cin >> b[i-1];
      if(b[i-1] == 1){
        cont[i] = cont[i-1];
      }
      else{
        cont[i] = cont[i-1] + 1;
      }
    }
    
    int element = -1;
    REP(i,1,n+1){
      if(cont[i] == (cont[n] - cont[i])){
        element = i-1;
        break;
      }
    }
    
    if(element == -1){
      cout << "-1\n";
    }
    else{
      cout << element + 1 << "\n";
    }
  
  }
  
  return 0;
}
