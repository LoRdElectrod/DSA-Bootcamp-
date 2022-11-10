//Deleting an element in an array
#include <iostream>
using namespace std;
int main(){
	int a , b, i , t;
	cout<<"Enter the number of elements:- ";
	cin>>a;
	int n[a];
	for (i=0;i<a;i++){
		cin>>n[i];
	}
	
	cout<<"enter the number to be deleted:- ";
	cin>>b;
	for(i=0;i<a;i++){
		if(n[i]==b){
			t=i;
		}
	}
	
	for(i=t;i<a;i++){
		n[i]=n[i+1];
	}
	a=a-1;
	for(i=0;i<a;i++){
		cout<<n[i]<<" ";
	}
	return 0;
}
	
