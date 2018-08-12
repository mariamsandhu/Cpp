#include <iostream>
using namespace std;
int main(){
	
	int a,num;
	for(a=1;a<=5;a++){
		
		cout<<"Enter a number\n";
		cin>>num;
		
		if(num<=0){
		   continue;
		  
		}
		cout<<"You entered the " << num<<endl;
	}
}
