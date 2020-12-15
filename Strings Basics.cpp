//Author:Manglam Tripahti
//Topic:Basics of strings
//Date: 13-12-2020
#include<iostream>
#include<string>
//C++ string class internally uses char array to store 
//character but all memory management, allocation, and 
//null termination is handled by string class itself
// that is why it is easy to use. 

using namespace std;
int main(){
	//INITIALIZATION
	//1) Raw string
	string str1("first string");
	//2) Another string
	string str2(str1);
	//3) By character with number of ocuurence
	string str3(5,'#');
	//4) By part of another string from 6th index 
	string str4(str1,6,6);
	//5) By part of another string : iteartor version 
	string str5(str2.begin(),str2.begin()+5);
	
	cout<< str1 << endl; 
    cout << str2 << endl; 
    cout << str3 << endl; 
    cout << str4 << endl; 
    cout << str5 << endl; 
    
    string str6=str4;
    
    str4.clear();
    int len=str6.length();
    cout<<"length of string is: "<<len<<endl;
    
    char ch=str6.at(2);
     
  cout << "third character of string is : " << ch << endl; 
  
    //  front return first character and back returns last character 
    //  of string 
  
//    char ch_f = str6.front();  // Same as "ch_f = str6[0];" 
//    char ch_b = str6.back();   // Same as below 
                               // "ch_b = str6[str6.length() - 1];" 
  
//    cout << "First char is : " <<ch_f<< ", Last char is : "
//         << ch_b << endl; 
  
    // c_str returns null terminated char array version of string 
    const char* charstr = str6.c_str(); 
    printf("%s\n", charstr); 
  
    // append add the argument string at the end 
    str6.append(" extension"); 
    //  same as str6 += " extension" 
  
    // another version of append, which appends part of other 
    // string 
    str4.append(str6, 0, 6);  // at 0th position 6 character 
  
    cout << str6 << endl; 
    cout << str4 << endl; 
  
    //  find returns index where pattern is found. 
    //  If pattern is not there it returns predefined 
    //  constant npos whose value is -1 
  
    if (str6.find(str4) != string::npos) 
        cout << "str4 found in str6 at " << str6.find(str4) 
             << " pos" << endl; 
    else
        cout << "str4 not found in str6" << endl; 
  
    //  substr(a, b) function returns a substring of b length 
    //  starting from index a 
    cout << str6.substr(7, 3) << endl; 
  
    //  if second argument is not passed, string till end is 
    // taken as substring 
    cout << str6.substr(7) << endl; 
  
    //  erase(a, b) deletes b characters at index a 
    str6.erase(7, 4); 
    cout << str6 << endl; 
  
    //  iterator version of erase 
    str6.erase(str6.begin() + 5, str6.end() - 3); 
    cout << str6 << endl; 
  
    str6 = "This is a examples"; 
  
    //  replace(a, b, str)  replaces b characters from a index by str 
    str6.replace(2, 7, "ese are test"); 
  
    cout << str6 << endl; 
    
    
    
    return 0;
}
