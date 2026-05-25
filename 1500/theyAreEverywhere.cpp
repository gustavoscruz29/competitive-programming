#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
bool ver(string s, int tam, int mid){
  map<char,int> freq;
  REP(i,0,mid){
    freq[s[i]]++;
  }
  if(freq.size() == tam) return true;
  REP(i,mid,s.size()){
    if(freq[s[i-mid]] == 1){
      freq.erase(s[i-mid]);
    }
    else{
      freq[s[i-mid]]--;
    }
    freq[s[i]]++;
    if(freq.size() == tam) return true;
  }
  return false;
}
 
int main()
{
  fast_io
  int n; cin >> n;
  string s; cin >> s;
  set<char> dif;
  for(char c : s)
    dif.insert(c);
  int tam = dif.size();
  int l = tam, r = n, ans = -1, mid = 0;
  while(l <= r){
    mid = l + (r - l) / 2;
    if(ver(s,tam,mid)){
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

/*
#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;

int main()
{
  fast_io
  
  ll n, m; cin >> n >> m;
  vector<ll> a(n);
  for(auto &e : a) cin >> e;
  ll pA = 0, pB = 0, sum = 0, maior = -1;
  while(pB != n){
    if(sum + a[pB] > m){
      maior = max(sum, maior);
      sum-=a[pA];
      pA++;
    }
    else{
      sum+=a[pB];
      pB++;
    }
  }
  
  maior = max(sum, maior);
  
  cout << maior << "\n";
  
  return 0;
}
*/
