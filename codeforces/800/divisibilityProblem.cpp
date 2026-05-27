#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	long long a,b;
	int t;

	cin >> t;

	for(int i = 0; i < t; i++) {
		cin >> a;
		cin >> b;

		if(a % b == 0) {
			cout << 0 << "\n";
		}
		else {
			if(a > b) {
				cout << b - (a % b) << "\n";
			}
			else {
				cout << b - a << "\n";
			}
		}

	}


	return 0;
}

