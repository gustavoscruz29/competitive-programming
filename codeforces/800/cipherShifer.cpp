#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;

using namespace std;

int main()
{
  ll t; cin >> t;
  while(t--){
    ll n; cin >> n;
    string s; cin >> s;
    
    ll pointA = 0, pointB = 1;
    while(pointB < n){
      if(s[pointB] == s[pointA]){
        cout << s[pointA];
        pointA = pointB + 1;
        pointB += 2;
      }
      else{
        pointB++;
      }
    }
    cout << "\n";
  
  }
  
  return 0;
}
