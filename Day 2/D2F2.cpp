//passing the address in pointer

#include <bits/stdc++.h>
using namespace std;

int call_by_value(int n){										`//Call by value type
	cout<<"address of n in given function(1): "<<&n<<endl;
	n *= n;
	return n;
}

int call_by_reference(int *a){									//Call by reference pointer
	cout<<"Address of a in function(2):- "<<a<<endl;
	*a *= *a;
}

int call_by_reference_address(int& n){							//Call by reference address
	cout<<"Address of n in function(3):- "<<&n<<endl;
	n *= n;
}

int main(){
	int n = 8;
	cout<<"Address of n in main(): "<<&n<<endl;
	cout<<"Ans: "<<call_by_value(n)<<endl;
	cout<<"Value of n:- "<<n<<endl;
	cout<<endl;
	cout<<"Ans:- "<<call_by_reference(&n)<<endl;
	cout<<"Value of n:- "<<n<<endl;
	cout<<endl;
	cout<<"Ans:- "<<call_by_reference_address(n)<<endl;
	cout<<"Value of n:- "<<n<<endl;
	return 0;
}
