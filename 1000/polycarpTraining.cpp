#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
 
using namespace std;
 
int main()
{
  fast_io
  long long n; cin >> n;
  long long ai[n];
  
  REP(i,0,n){
    cin >> ai[i];
  }
  
  sort(ai,ai+n);
  int maximum = 0;
  int dia = 1;
  
  REP(i,0,n){
    
    if(ai[i] >= dia){
      maximum += 1;
      dia += 1;
    }
  }
  
  cout << maximum << "\n";
  
  return 0;
}
