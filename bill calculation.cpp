#include<iostream>
using namespace std;
int main(){
	int unitConsumed, unitPrice=18;
	float tax;
	cout<<"Enter the Electoricity Unit Consumptions\n";
	cin>>unitConsumed;
	
	if(unitConsumed>=400){
		tax=200;
	}else if (unitConsumed>=300){
		tax=150;
	}else if (unitConsumed>=200){
		tax=100;
	} else if (unitConsumed>=100){
		tax=75;
	}  
	
	cout<<" Your calculated Bill with tax is "<< (unitConsumed * unitPrice) + tax;
}
