#include <bits/stdc++.h>
using namespace std;

int main(void) {
	string s;
	int u=0, l=0;
	cin>>s;

	for (int i=0; i<s.length(); i++) {
		if (s[i]<95) {u++;}
		else {l++;}
	}
	if (u>l) {for (int i=0; i<s.length(); i++) {s[i]=toupper(s[i]);}}
	else if (u<l) {for (int i=0; i<s.length(); i++) {s[i]=tolower(s[i]);}}
	else {for (int i=0; i<s.length(); i++) {s[i]=tolower(s[i]);}}
	cout<<s<<endl;
}

