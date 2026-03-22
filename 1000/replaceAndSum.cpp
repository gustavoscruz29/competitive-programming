#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t, n, q, l, r, soma = 0;
	cin >> t;

	for(int j = 0; j < t; j++) {
		cin >> n;
		cin >> q;

		int a[n];
		int b[n];
		int prefix_sum[n+1];
		prefix_sum[0] = 0;

		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}

		for(int i = 0; i < n; i++) {
			cin >> b[i];
		}

		for(int i = 0; i < n; i++) {
			if(a[i] < b[i]) {
				a[i] = b[i];
			}
		}

		for(int i = n - 1; i > 0; i--) {
			if(a[i] > a[i - 1]) {
				a[i - 1] = a[i];
			}
		}
		
		prefix_sum[1] = a[0];
		
		for(int i = 2; i < n + 1; i++){
		    prefix_sum[i] = prefix_sum[i-1] + a[i - 1];
		}

		for(int x = 0; x < q; x++) {
			cin >> l;
			cin >> r;

			cout << prefix_sum[r] - prefix_sum[l-1] << " ";
			soma = 0;
		}
		cout << "\n";
	}

	return 0;
}
