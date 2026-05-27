#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main()
{
  fast_io
  int t; cin >> t;
  while(t--){
    long long n; cin >> n;
    long long s1[n];
    long long s2[n];
    
    REP(i,0,n){
      cin >> s1[i];
    }
    
    REP(i,0,n){
      s2[i] = s1[i];
    }
    
    sort(s2,s2+n);
    
    REP(i,0,n){
      if(s1[i] == s2[n-1]){
        cout << s1[i] - s2[n-2] << " ";
      }
      else{
        cout << s1[i] - s2[n-1] << " ";
      }
    }
    cout << "\n";
    
  }
  return 0;
}
