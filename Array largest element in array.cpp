//Author MAnglam 11-12-2020
#include<iostream>
using namespace std;
int main(){
	int arr[5];
	cout<<"Enter the values in array via pressing enter: ";
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	cout<<"Your array is:"<<endl;
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	int temp=arr[0];
	for(int i=0;i<5;i++){
		if(arr[i]>temp){
			temp=arr[i];
		}
	}
	cout<<endl;
	cout<<"Largest element in the array is: ";
	cout<<temp;
	return 0;	
		
	}
	

