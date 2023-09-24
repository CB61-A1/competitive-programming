#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	string s;

	cin>>n;
	string a[n];
	
	for (int i=0; i<n; i++) {cin>>s; a[i]=s;}
	for (int i=0; i<n; i++) {
		if (a[i].length()>10) {
			cout<<a[i][0]<<a[i].length()-2<<a[i][a[i].length()-1]<<endl;
		}
		else {
			cout<<a[i]<<endl;
		}
	}

}
