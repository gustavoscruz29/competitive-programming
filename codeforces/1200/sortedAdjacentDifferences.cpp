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
   vector<ll> a(n);
   REP(i,0,n){
    cin >> a[i];
   }
   
   sort(a.begin(),a.end());
   
   if(n % 2 == 0){
    int indice = n / 2;
    REP(i,0,indice){
      cout << a[indice - i - 1] << " ";
      cout << a[indice + i] << " ";
    }
    cout << "\n";
   }
   else{
    int indice = (n-1) / 2;
    REP(i,0,indice){
      cout << a[indice + i] << " ";
      cout << a[indice - i - 1] << " ";
    }
    cout << a[n-1] << "\n";
   }
   
  }
  
  
  return 0;
}
