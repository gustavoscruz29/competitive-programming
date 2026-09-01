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
  vector<int> a(1e7+1,0), b(1e7+1,0);
  a[1] = 2; a[2] = 3;
  b[2] = 1; b[3] = 2;
  REP(i,3,1e7+1){
    if(b[i] == 0){
      a[i] = a[i-1] + 1;
      if(a[i] <= 1e7)
        b[a[i]] = i;
    }
    else{
      a[i] = 3 * b[i];
      if(a[i] <= 1e7)
        b[a[i]] = i;
    }
  }
  
  int n; cin >> n;
  
  cout << a[n] << endl;
  
  return 0;
}
