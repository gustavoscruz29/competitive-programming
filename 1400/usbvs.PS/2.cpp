
#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  fast_io;
  int a, b, c; cin >> a >> b >> c;
  int m; cin >> m;
  int val;
  ll total = 0, equipped = 0;
  string type;
  vector<int> ps, usb;
  REP(i,0,m){
    cin >> val;
    cin >> type;
    if(type == "USB"){
      usb.push_back(val);
    }
    else{
      ps.push_back(val);
    }
  }
  
  if(m > 0){
    sort(usb.rbegin(), usb.rend());
    sort(ps.rbegin(), ps.rend());
    
    while(a > 0 && usb.size() > 0){
      total += usb.back();
      usb.pop_back();
      equipped ++;
      a--;
    }
    
    while(b > 0 && ps.size() > 0){
      total += ps.back();
      ps.pop_back();
      equipped ++;
      b--;
    }
    
    while(c--){
      if(usb.size() > 0 && ps.size() > 0){
        if(usb[usb.size()-1] > ps[ps.size()-1]){
          total += ps.back();
          ps.pop_back();
          equipped++;
        }
        else {
          total += usb.back();
          usb.pop_back();
          equipped++;
        }
      }
      else{
        if(usb.size() > 0){
          total += usb.back();
          usb.pop_back();
          equipped++;
        }
        else if(ps.size() > 0){
          total += ps.back();
          ps.pop_back();
          equipped++;
        }
        else{
          break;
        }
      }
    }
    
    cout << equipped << " " << total << "\n";
  }
  else{
    cout << 0 << " " << 0 << "\n";
  }
  
}
