//Binary search
#include <iostream>
using namespace std;
int binary(int arr[],int x , int low ,int high){
	
	while(low<=high){
		int mid = (low+high)/2;
		
		if(arr[mid]==x){
			return mid;
		}
		
		else if(x>arr[mid]){
			low=mid+1;
		}
		
		else{
			high=mid-1;
		}
		return -1;
	}
}

int main(){
	int x;
	int arr[] = {1,6,7,5,4};
	cout<<"Enter the number you want to search in the given array:- ";
	cin>>x;
	int n = sizeof(arr)/sizeof(arr[0]);
	int r = binary(arr,x,0,n-1);
	
	if(r==-1){
		cout<<"found";
	}
	else{
		cout<<"Not Found";
	}
}
