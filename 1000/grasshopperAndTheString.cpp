#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
 
using namespace std;
 
int main()
{
    fast_io
    int h = 1;
    string s; cin >> s;
    vector<int> v;
    set<char> vowels = {'A','E','I','O','U','Y'};
    
    REP(i,0,s.size()){
      if(vowels.count(s[i])){
        v.push_back(h);
        h = 0;
      }
      h += 1;
    }
    
    v.push_back(h);
    
    int maior = 0;
    
    for(int x : v){
      if(x > maior){
        maior = x;
      }
    }
    
    cout << maior << '\n';
    
    return 0;
}
