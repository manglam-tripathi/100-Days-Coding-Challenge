#include<iostream>
using namespace std;

void findSize(int (&arr)[10]) //for finding the size of array
{ 
    cout << sizeof(arr) << endl; 
} 
int main()
{
 	//Array declaration by specifying size
 	int arr[10];
 	
 	//or
 	int n=10;
 	int arr2[n];
 	
 	
 	//Array declaration by initialising elements
 	int arr3[]={10,20,30,40};
 	
 	
 	//Array declaration by specifying size and initialzing elements
 	int arr4[6]={10,20,39,40};
 	//above is same as  "int arr[] = {10, 20, 30, 40, 0, 0}"
 	
 	//Traversaal 
 	for(int i=0;i<6;i++){
 		printf("Address arr4[%d] is %p\n",i,&arr4[i]);
 		cout<<arr4[i]<<endl;
 		cout<<i[arr4]<<endl;//Another way to traverse
	 }
	 cout<<endl;
	 
	 
	 //Multidimensional array
	 int x[3][2]={{0,1},{2,3},{4,5}};
	 for(int i=0;i<3;i++){
	 	for(int j=0;j<2;j++){
	 		cout<<"Element at x["<<i<<"]["<<j<<"]:";
	 		cout<<x[i][j]<<endl;
		 }
	 }
	 
	// C++ program to print elements of Three-Dimensional Array 
	// initializing the 3-dimensional array 
	int xy[2][3][2] ={{{0,1},{2,3},{4,5}},{{6,7},{8,9},{10,11}}}; 

	// output each element's value 
	for(int i = 0; i < 2; ++i){ 
		for(int j = 0; j < 3; ++j){ 
			for(int k = 0; k < 2; ++k) { 
				cout << "Element at x[" << i << "][" << j 
					<< "][" << k << "] = " << xy[i][j][k] 
					<< endl; 
			} 
		} 
	} 
	int a[10]; 
    cout << sizeof(a) << " "; 
    findSize(a); 
	return 0;
}

    
