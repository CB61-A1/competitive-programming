#include <iostream>
using namespace std;

int main(){
	int w;
	cin >> w;

	if (w>100 || w<1) {
		return 1;
	}
	
	if (w%2 == 0){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}
