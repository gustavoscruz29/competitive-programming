#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;

using namespace std;

int main()
{
  fast_io
  
  int t; cin >> t;
  
  while(t--){
    string a; cin >> a;
    string b; cin >> b;
    int maior = 0;
    if(a.size() < b.size()){
      for(int i = a.size(); i > 0; i--){
        for(int x = 0; (x + i) <= a.size(); x++){
          string aAux = a.substr(x,i);
          for(int j = 0; (j + i) <= b.size(); j++){
            string bAux = b.substr(j,i);
            if(aAux == bAux){
              maior = max(maior,i);
            }
          }
        }
      }
    }
    else{
      for(int i = b.size(); i > 0; i--){
        for(int x = 0; (x + i) <= b.size(); x++){
          string bAux = b.substr(x,i);
          for(int j = 0; (j + i) <= a.size(); j++){
            string aAux = a.substr(j,i);
            if(aAux == bAux){
              maior = max(maior,i);
            }
          }
        }
      }
    }
    cout << (a.size() + b.size()) - (2 * maior) << "\n";
  }
      
  return 0;
}
