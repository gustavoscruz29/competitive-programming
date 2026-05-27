#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
 
using namespace std;
 
int main()
{
  fast_io
  int t; cin >> t;
  
  while(t--){
    int n; cin >> n;
    int k; cin >> k;
    int ns[n];
    int op = 6;
    int menor = 11;
    int op1 = 0, op2 = 0, op3 = 0;
    
    REP(i,0,n){
      cin >> ns[i];
    }
    
    if(k == 3 || k == 5){
      REP(i,0,n){
        if(ns[i] % k == 0){
          op = 0;
          menor = 0;
          break;
        }
        else{
          if(ns[i] < k){
            op = k - ns[i];
          }
          else{
            op = k - (ns[i] % k);
          }
        }
        if(op < menor){
          menor = op;
        }
      }
      op = menor;
    }
    else if(k == 2){
      REP(i,0,n){
        if(ns[i] % k == 0){
          op = 0;
          break;
        }
        else{
          op = 1;
        }
      }
    }
    else{
      REP(i,0,n){
        if(ns[i] % k == 0){
          op = 0;
          break;
        }
        else if(ns[i] % k == 1){
          op1 += 1;
        }
        else if(ns[i] % k == 2){
          op2 += 1;
        }
        else{
          op3 += 1;
        }
      }
      if(op == 0){
        op = 0;
      }
      else if(op2 > 1){
        op = 0;
      }
      else if(op3 >= 1 || (op2 >= 1 && op1 >= 1)){
        op = 1;
      }
      else if(op2 == 1 || op1 > 1){
        op = 2;
      }
      else{
        op = 3;
      }
    }
    
    cout << op << '\n';
    
  }
  return 0;
}
