#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;

bool verificar(int mid, vector<int>&xs, int k){
  int ultimo = INT_MIN;
  int vacas = 0;
  REP(i,0,xs.size()){
    if (abs(xs[i] - ultimo) > mid) {
      vacas ++;
      ultimo = xs[i] + mid;

      if (vacas > k) { return false; }
    }
  }
  return true;
}

int main()
{
  freopen("angry.in","r",stdin);
  freopen("angry.out","w",stdout);
  int n, k; cin >> n >> k;
  vector<int> xs(n);
  for(auto &e:xs){cin>>e;}
  sort(xs.begin(),xs.end());
  int l = 0, r = xs[n-1] - xs[0], mid = 0, ans = 0;
  while(l <= r){
    mid = l + (r - l) / 2;
    if(verificar(mid, xs, k)){
      ans = mid;
      r = mid - 1;
    }
    else{
      l = mid + 1;
    }
  }
  
  cout << ans << "\n";
  
  return 0;
}
