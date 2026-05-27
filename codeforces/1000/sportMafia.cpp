#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;

bool ver(int n, int k, int mid){
  ll fi = (n - mid);
  fi = fi * (fi + 1) / 2;
  return fi - mid >= k;
}

int main()
{
  fast_io
  int n, k; cin >> n >> k;
  
  int l = 0, r = n, ans = -1, mid = 0;
  while(l<=r){
    mid = l + (r - l) / 2;
    if(ver(n,k,mid)){
      ans = mid;
      l = mid + 1;
    }
    else{
      r = mid - 1;
    }
  }
  
  cout << ans << "\n";
  
  return 0;
}
