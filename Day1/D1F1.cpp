//Traversing an array
#include <iostream>
using namespace std;
int main(){
	int a;
	cout<<"""enter the number of elements"<<endl;
	cin>>a;
	int n[a];
	for(int i=0; i<a ; i++){
		cin>>n[i];
	}
	cout<<"traversing the entered array"<<endl;
	for(int i=0 ; i<a ; i++){
		cout<<n[i]<<" ";
		
	}
	return 0;
}
