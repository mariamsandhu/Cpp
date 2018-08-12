#include<iostream>
using namespace std;
int main(){
	int y;
	cout<<"Enter year\n";
	cin>>y;
	if(y%4==0){
		cout<<"it is leap year";
	}else{
		cout<<"it is not leap year";
	}
}
