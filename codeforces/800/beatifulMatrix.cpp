#include <iostream>
using namespace std;

int main()
{
	int matrix[5][5];
	int iDo1 = 0, jDo1 = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> matrix[i][j];
			if(matrix[i][j] == 1) {
				iDo1 = i;
				jDo1 = j;
			}
		}

	}

	iDo1 = abs(iDo1 - 2);
	jDo1 = abs(jDo1 - 2 );

	cout << iDo1 + jDo1;

	return 0;
}
