#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
 
using namespace std;
 
int main()
{
    fast_io
    string consonants;
    set<char> vogais = {'a','e','i','o','u','y'};
    
    string a; cin >> a;
    
    for(auto& x : a){
        x = tolower(x);
    }
    
    REP(i, 0, a.size()){
        if(!vogais.count(a[i])){
            consonants += ".";
            consonants += a[i];
        }
    }
    
    cout << consonants;
 
    return 0;
}
