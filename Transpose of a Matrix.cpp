//Author:Manglam Tripathi
//Program:To find the transpose of matrix
//Date:13-12-2020
#include<iostream>
using namespace std;
int main()
{
	int row,column;
	cout<<"Enter the row and column";
	cin>>row;
	cin>>column;
	int a[row][column];
	for(int i=0; i<row;i++){
		for(int j=0;j<column;j++){
			cout<<"Enter the "<<i<<j<<"element of matrix";
			cin>>a[i][j];
		}
	}
	cout<<"The matrix is:"<<endl;
	for(int i=0; i<row;i++){
		for(int j=0;j<column;j++){
			cout<<a[i][j]<<"  ";
			if(j==column-1){
				cout<<endl;
			}
		}
	}
	int transpose[column][row];
	cout<<"The transpose of the matrix is :"<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			transpose[i][j]=a[j][i];
			
		}
	}
	for(int i=0; i<row;i++){
		for(int j=0;j<column;j++){
			cout<<transpose[i][j]<<"  ";
			if(j==column-1){
				cout<<endl;
			}
		}
	}
	return 0;
}
