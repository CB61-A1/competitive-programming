#include <iostream>
using namespace std;

int main(){
	string n;
	do{	
		cin>>n;
	}
	while(n.length()<0);
	cout<<n[0]<<(int)((n.length()-1)-n[0])<<n[n.length()-1]<<endl;
}
