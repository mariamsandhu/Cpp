#include <iostream>
using namespace std;
int main(){
	int a;
	comeHere:
	cout<<"enter 1 or 2";
	cin>>a;
	if(a==1){
		goto comeHere;
	}else{
		cout<<"program going to exit";
	}
}
