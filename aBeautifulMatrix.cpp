#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, y, matrix[5][5];
	int total=0;

	for (int i=0; i<5; i++) {
		for (int j=0; j<5; j++) {
			cin>>matrix[i][j];
			if (matrix[i][j]==1) {
				y=i; x=j;
			}
		}
	}
	if (matrix[2][2]!=1) {
		if (x-2>0) { total += x-2; }
		else if (2-x>0) { total += 2-x;}

		if (y-2>0) { total += y-2; }
		else if (2-y>0) { total += 2-y;}

		cout<<total<<endl;
	}

	else {
		cout<<0<<endl;
	}

	return 0;
}
