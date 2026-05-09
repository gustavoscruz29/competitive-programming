#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main()
{
  fast_io
  long long n; cin >> n;
  long long ps[n];
  long long discount = 0;
  REP(i,0,n){
    cin >> ps[i];
  }
  
  sort(ps, ps+n);
  
  long long div3 = n % 3;
  
  if(div3 != 0){
    discount += 0;
  }
  
  REP(i,div3,n){
    discount += ps[i];
    i = i + 2;
  }
  
  cout << discount << "\n";
  
  return 0;
}
