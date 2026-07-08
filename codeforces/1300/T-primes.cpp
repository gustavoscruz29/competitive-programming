#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define endl '\n'
typedef long long ll;
using namespace std;
 
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int mx = (int)2e5+9;
const int LIMIT = 1000000;
 
int main(){
  fast_io
  const int LIMIT = 1000000;
  vector<bool> is_composite(LIMIT + 1, false);
  is_composite[0] = is_composite[1] = true;
  for (long long i = 2; i * i <= LIMIT; i++) {
    if (!is_composite[i]) {
      for (long long j = i * i; j <= LIMIT; j += i)
        is_composite[j] = true;
    }
  }
  
  unordered_set<long long> tprimes;
  for (long long p = 2; p <= LIMIT; p++) {
    if (!is_composite[p]) {
      tprimes.insert(p * p);
    }
  }
 
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    long long x;
    cin >> x;
    bool isTPrime = tprimes.count(x) > 0;
    cout << (isTPrime ? "YES" : "NO") << "\n";
  }
 
  return 0;
}
