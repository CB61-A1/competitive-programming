#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int k, w, n, total=0;
	cin>>k>>n>>w;
	
	for (int i=1; i<=w; i++) {total+=i*k;}

	if (total-n>0) {cout<<total-n<<endl;}
	else {cout<<0<<endl;}
}
