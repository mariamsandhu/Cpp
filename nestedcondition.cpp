#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter three numbers\n";
	cin>>a>>b>>c;
	if(a==b){
		if(a==c){
			cout<<"Numbers are equal";
		}else{
			cout<<"Numbers are different";
		}
	}else{
		cout<<"Numbers are different";
	}
}
