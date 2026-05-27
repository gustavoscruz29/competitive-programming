#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main()
{
  fast_io
  long long n; cin >> n;
  long long m; cin >> m;
  vector<long long> as(n);
  REP(i,0,n){
    cin >> as[i];    
  }
  
  sort(as.rbegin(),as.rend());
  
  long long sum = 0;
  long long count = 0;
  
  REP(i,0,n){
    sum += as[i];
    count++;
    if(m <= sum){
      break;
    }
  }
  
  cout << count << "\n";
  
  return 0;
}
