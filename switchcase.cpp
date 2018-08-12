#include <iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter the choice \n 1 for enter main menu \n 2 to select balance path \n 3 to exit\n";
	cin>>a;
	switch(a){
		case 1:
			cout<<"You entered in main menu";
		break;
		case 2:
			cout<<"perform the following to check your balace";
		break;
		case 3:
			cout<<"you are exiting from system";
		break;
		default:
			cout<<"you having not selected the given menu";	
	}
}
