//#include<bits/stdc++.h> 
#include<iostream>
using namespace std; 

void GetSubString(string a) 
{ 
	int i,j;
	for(i=1;i<=a.length();i++){
		for(j=0;j<a.length();j++){
			if((j+i)>a.length()){
				break;
			}
			cout << a.substr(j,i)<<endl;
		}
	}
} 

int main() 
{ 
    string a = "apple" ; 
    GetSubString(a); 
    return 0; 
} 
