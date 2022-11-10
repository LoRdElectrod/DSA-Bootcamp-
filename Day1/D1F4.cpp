//Linear search
#include <iostream>
using namespace std;
int main(){
	int i ,k, n;
	int count = 0;
	cout<<"Enter the size:- ";
	cin>>n;
	int a[n];
		for(int i=0; i<n ; i++){
		cin>>a[i];
	}
	
	cout<<"Enter the element you wanna search:- ";
	cin>>k;
	
	for(i=0;i<n;i++){
		if(k==a[i]){
			count = 1;
			break;
		}
	}
	
	if(count==1){
		cout<<"The number is found at "<<i;
	}	
	else{
		cout<<"The number is not present";
	}
		
}
