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
   int r; cin >> r;
   int b; cin >> b;
   
   int p = r / (b + 1);
   int q = r % (b + 1);
   
   REP(i, 1, n+1){
    if(i % (p + 1) != 0){
      if(r > 0){
        cout << "R";
        r--;
      }
    }
    else{
      if(q != 0){
        if(r > 0){
          cout << "R";
          q--;
          r--;
        }
      }
      if(b > 0){
        cout << "B";
        b--;
      }
    }
   }
    cout << "\n";
  }
  
  return 0;
}
