#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter three numbers\n";
	cin>>a>>b>>c;
	if(a>b){
		if(a>c){
			cout<<"a is biggest number\n";
		}else{
		   cout<<"c is biggest number\n";
		}
	}else{
		cout<<"b is biggest number";
	}
}
