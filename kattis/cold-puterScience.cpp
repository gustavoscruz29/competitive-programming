#include <iostream>
using namespace std;

int main()
{
  int n, res = 0;
  cin >> n;
  
  int temp[n];
  
  for(int i = 0; i < n; i++){
    cin >> temp[i];
    if(temp[i] < 0){
      res++;
    }
  }
  
  cout << res;

  return 0;
}
