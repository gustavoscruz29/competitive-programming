#include <iostream>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
	string w;
	int n;
	cin >> n;
 
	for (int i = 0; i < n; i++) {
		cin >> w;
		if(w.length() > 10) {
			w.replace(1, w.length()-2, std::to_string(w.length()-2));
		}
		cout << w << "\n";
	}
 
	return 0;
}
