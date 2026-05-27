#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  fast_io;
  int n; cin >> n;
  vector<pair<int,int>> days(n);
  REP(i,0,n) cin >> days[i].first >> days[i].second;
  sort(days.begin(), days.end());
  int finalDay = min(days[0].first, days[0].second);
  REP(i,1,n){
    if(days[i].second >= finalDay)
      finalDay = days[i].second;
    else{
      finalDay = days[i].first;
    }
  }
  
  cout << finalDay << "\n";
  
}
