#include <iostream>
using namespace std;
 
int main()
{
    int n, yes = 0, resp = 0, y = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> resp;
        if (resp == 1){
            y++;
        }
        cin >> resp;
        if (resp == 1){
            y++;
        }
        cin >> resp;
        if (resp == 1){
            y++;
        }
        if(y >= 2){
            yes++;
        }
        y = 0;
    }
    cout << yes;
 
    return 0;
}
