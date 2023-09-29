#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int a, b, x=0;
	cin>>a>>b;

	while (a<=b) {
		a*=3; b*=2;

		x++;
	}
	cout<<x<<endl;
}

