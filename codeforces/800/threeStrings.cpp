#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main()
{
    fast_io
    string a, b, c;
    int count = 0;
    
    int t; cin >> t;
    
    while(t--){
        cin >> a >> b >> c;
        REP(i,0,a.size()){
            if(c[i] != a[i] && b[i] != c[i]){
                count = 1;
                break;
            }
        }
        
        if(count == 1){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
        count = 0;
    }

    return 0;
}
