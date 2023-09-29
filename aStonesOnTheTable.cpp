#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int a=0, s;
	string n;
	
	cin>>s>>n;

	for (int i=0; i<s; i++) {
		if (n[i]==n[i+1]) {a++;}
	}
	cout<<a<<endl;
}

