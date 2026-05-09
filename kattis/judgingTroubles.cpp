#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main()
{
  fast_io

  int n; cin >> n;
  
    map<string,int> j1;
    map<string,int> j2;
    set<string> se;
    REP(i,0,n){
      string s;
      cin >> s;
      se.insert(s);
      j1[s] += 1;
    }
    
    REP(i,0,n){
      string s;
      cin >> s;
      se.insert(s);
      j2[s] += 1;
    }
    
    int soma = 0;
    for(auto x : se){
      if(j1[x] < j2[x]){
        soma += j1[x] % j2[x];
      }
      else if(j1[x] == j2[x]){
        soma += j1[x];
      }
      else{
        soma += j2[x] % j1[x];
      }
    }
    
    cout << soma << "\n";
  
  return 0;
}
