#include<iostream>
using namespace std;

int main(void){
    string num = "9844451355";
	int count = num.length();
	int state = 0;
	int finalstate = 4;
	int deadstate = 5;
	if(count == 10){
		for(int i=0;i<count;i++){
			switch(num[i]){
				case '9': if(state == 0){
							state = 1;
						} else if(state == 4)
							{
								state = 4;
							}
							else{
								state = 5;
							}
						break;
				case '8': if(state == 1){
							state = 2;
						} else if(state == 4)
							{
								state = 4;
							}
							else{
								state = 5;
							}
						break;
				case '4':if(state == 2){
							state = 3;
						} else if(state == 4)
							{
								state = 4;
							}
							else{
								state = 5;
							}
						break;
				case '1':if(state == 3){
							state = 4;
						} else if(state == 4)
							{
								state = 4;
							}
							else{
								state = 5;
							}
						break;
				case '0':if(state == 4)
							{
								state = 4;
							}
							else{
								state = 5;
							}
							break;
				case '2':if(state == 4)
							{
								state = 4;
							}
							else{
								state = 5;
							}
							break;
				case '3':if(state == 4)
							{
								state = 4;
							}
							else{
								state = 5;
							}
							break;
				case '5':if(state == 4)
							{
								state = 4;
							}
							else{
								state = 5;
							}
							break;
				case '6':if(state == 4)
							{
								state = 4;
							}
							else{
								state = 5;
							}
							break;
				case '7':if(state == 4)
							{
								state = 4;
							}
							else{
								state = 5;
							}
							break;
				default : state = 5;
							break;
				}
			}
			if(state == finalstate){
				cout<<"this is valid mobile number";
			}
			else if(state == deadstate){
				cout<<"this is invalid mobile number";
			}
		}
		else{
			cout<<"not valid.....mobile number should have 10 characters!!!"<<endl;
		}
	}
		

