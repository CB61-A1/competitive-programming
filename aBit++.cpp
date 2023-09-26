#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x=0;
	string in;
	cin>>n;

	for (int i=0; i<n; i++) { cin>>in; 
		if (in[1]=='+') {x++;}
		else if (in[1]=='-') {x--;}

	}
	cout<<x<<endl;
	return 0;
}
