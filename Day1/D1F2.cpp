//Inserting an element in array
#include <iostream>
using namespace std;
int main(){
	int a , b, i;
	cout<<"Enter the number of elements "<<endl;
	cin>>a;
	int n[a];
	for (i=0;i<a;i++){
		cin>>n[i];
	}
	
	cout<<"Enter index you want to insert at: "<<endl;
	cin>>b;
	a=a+1;
	for(i=a-2;i>b;i--){
		n[i+1] = n[i];
		cout<<"Enter number to be inserted:- "<<endl;
		cin>>n[b];
		for(i=0;i<a;i++){
			cout<<n[i]<<" ";
		} 
	}
	return 0;
}
