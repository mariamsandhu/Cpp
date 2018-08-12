#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter Value of a"<<endl;
	cin>>a;
	cout<<"Enter value of b"<<endl;
	cin>>b;
	cout<<"Enter value of c"<<endl;
	cin>>c;
	if(a<b){
		if(a<c){
			cout<<"a is smallest number"<<endl;	
		}else{
			cout<<"c is smallest number"<<endl;
		}	
	}else{
		if(b>c){
			cout<<"c is smallest number"<<endl;
		}else{
			cout<<"b is smallest number"<<endl;
		}
	  
	}
}
