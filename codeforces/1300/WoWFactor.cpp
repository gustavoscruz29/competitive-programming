#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define f first
#define s second
#define endl '\n'
typedef long long ll;
using namespace std;
 
int main() {
  fast_io
  string s; cin >> s;
  int n = s.size();
  ll totalW = 0;
  REP(i,1,n)
    if(s[i] == s[i-1] && s[i] == 'v') totalW++;
  ll runningW = 0;
  ll totalWoW = 0;
  REP(i,1,n){
    if(s[i] == s[i-1] && s[i] == 'v') runningW++;
    if(s[i] == 'o') totalWoW += runningW * (totalW - runningW);
  }
  cout << totalWoW << endl;
  return 0;
}
