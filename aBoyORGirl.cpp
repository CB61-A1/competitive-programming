#include <bits/stdc++.h>
using namespace std;

void sort(string &str)
{
   sort(str.begin(), str.end());
}

int main() {
	string str;
	cin>>str;
	sort(str);
	int a=0;
	
	for (int i=0, j=1; i<str.length(); i++) {
		if (str[i]==str[j]) {a++;}
		j++;
	}
	a=str.length()-a;

	if(a%2==0) {cout<<"CHAT WITH HER!"<<endl;}
	else {cout<<"IGNORE HIM!"<<endl;}

	return 0;
}
