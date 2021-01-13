#include<iostream>
#include<vector> //importing the vector library

using namespace std;

int main()
{
	vector <int> vector1;
	vector <int> vector2; 
 
	vector1.push_back(10);
	vector1.push_back(20);

	int len1=vector1.size();
	cout<<"Length of the vector1 is "<<len1<<endl;
	for(int i=0;i<len1;i++)
	{
		cout<<vector1.at(i)<<endl;
	}


	vector2.push_back(100);
	vector2.push_back(200);
	int len2=vector2.size();
	cout<<"Length of the vector2 is "<<len2<<endl;
	for(int i=0;i<len2;i++)
	{
		cout<<vector2.at(i)<<endl;
	}

	vector <vector<int>> vector_2d;

	// Adding a vector in a vector dynamically
	
	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);
	//Display the  elements in an 2d vector


	cout<<"\nvector_2d : "<<endl;
	cout<<vector_2d.at(0).at(0)<<" "<<vector_2d.at(0).at(1)<<endl;
	cout<<vector_2d.at(1).at(0)<<" "<<vector_2d.at(1).at(1)<<endl;

	// changing the vectors value
	vector1.at(0)=1000;
	cout<<vector_2d.at(0).at(0)<<" "<<vector_2d.at(0).at(1)<<endl;
	cout<<vector_2d.at(1).at(0)<<" "<<vector_2d.at(1).at(1)<<endl;
	





	return 0;

}