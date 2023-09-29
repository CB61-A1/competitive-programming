#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
	string x;
	cin>>x;
	int t=ceil((float)x.length()/2); int c=0;
	int s[t];

	for (int i=0; i<x.length(); i++) {
		if (x[i]!='+') {s[c]=(int)x[i]-48; c++;}
	}
	sort(s, s+t);
	c=0;
	for (int i=0; i<x.length(); i++) {
		if (x[i]!='+') {x[i]=s[c]+'0'; c++;}
	}

	for (int i=0; i<x.length(); i++) {cout<<x[i];}
	cout<<endl;
	return 0;
}
