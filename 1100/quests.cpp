#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  int t; cin >> t;
  while(t--){
    ll sum = 0, sum2 = 0, maiorSum = -1;
    int maior = -1;
    int n, k; cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n);
    for(auto &e : a){cin>>e;}
    for(auto &e : b){cin>>e;}
    if(k <= n){
      REP(i,0,k){
        sum += a[i];
        maior = max(maior,b[i]);
        sum2 = sum + (k - (i + 1)) * maior;
        maiorSum = max(maiorSum, sum2);
      }
      cout << maiorSum << "\n";
    }
    else{
      REP(i,0,n){
        sum += a[i];
        maior = max(maior,b[i]);
        sum2 = sum + (k - (i + 1)) * maior;
        maiorSum = max(maiorSum, sum2);
      }
      cout << maiorSum << "\n";
    }
    
  }
  
  return 0;
}
