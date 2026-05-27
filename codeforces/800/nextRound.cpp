#include <iostream>
using namespace std;
 
int main()
{
    int n, k, c = 0;
    cin >> n >> k;
    int p[n];
    for(int i = 0; i < n; i++){
        cin >> p[i];
    }
    
    for(int i = 0; i < n; i++){
        if(p[i] >= p[k-1] && p[i] > 0){
            c++;
        }
    }
    
 
    cout << c;
    
    return 0;
}
