#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  fast_io;
  
  int n,m; cin >> n >> m;
  int maior = -1;
  vector<int> ais(n);
  for(auto &e : ais){
    cin >> e;
    maior = max(maior, e);
  }
  maior = maior + m;
  REP(i,0,m){
    int pos = -1;
    REP(j,0,n){
      if(pos == -1 || ais[j] < ais[pos]){
        pos = j;
      }
    }
    ais[pos]++;
  }
  int maiorMin = *max_element(ais.begin(),ais.end());
  cout << maiorMin << " " << maior << "\n";
}

/*
Com a busca binaria

#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
bool ver(int mid, vector<int> ais, int m){
  int sum = 0;
  REP(i,0,ais.size()){
    if(mid - ais[i] > 0){
      sum += mid - ais[i];
    }
  }
  return sum >= m;
}
 
int main()
{
  fast_io;
  
  int n,m; cin >> n >> m;
  int maior = -1;
  vector<int> ais(n);
  for(auto &e : ais){
    cin >> e;
    maior = max(maior, e);
  }
  maior = maior + m;
  int l = 0, r = maior, ans = -1, mid = 0;
  while(l<=r){
    mid = l + (r - l) / 2;
    if(ver(mid,ais,m)){
      ans = mid;
      r = mid - 1;
    }
    else{
      l = mid + 1;
    }
  }
  
  if(mid < *max_element(ais.begin(),ais.end())){
    cout << *max_element(ais.begin(),ais.end()) << " " << maior << "\n";
  }
  else{
    cout << ans << " " << maior << "\n";
  }
  
}



*/
