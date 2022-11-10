//Address and Pointers

#include <bits/stdc++.h>
using namespace std;
int main(){
	int x = 1080;
	int *p; 		//Defining a variable
	p=&x;
	
	cout<<x<<endl;	//address of a variable
	cout<<p<<endl;	//address olf a variable x
	cout<<*p;		//value at pointer

	return 0;
}
