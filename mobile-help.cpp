#include <iostream>
using namespace std;
int main(){
	int a;
	label:
	cout<<"Enter the number"<<endl;
	cin>>a;
	switch(a){
		case 1:
			cout<<"Your current balance is Rs."<<endl;
		break;;
		case 2:
			cout<<"You have get the mobile loan"<<endl;
		break;
		case 3:
			cout<<"Your are now on conference call"<<endl;
		break;
		case 4:
			goto label;
		case 5:
			cout<<"exit"<<endl;
		break;		
	}
}
