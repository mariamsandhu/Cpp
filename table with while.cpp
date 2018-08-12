#include <iostream>
using namespace std;

int main(){
	int tableNo, tableLength,tableCounter=1;
	cout<<"Enter the table no";
	cin>>tableNo;
	cout<<"Enter the lenght of table";
	cin>>tableLength;
	
	while(tableCounter<=tableLength){
		cout<<tableNo<<" * "<<tableCounter<<" = "<< (tableNo * tableCounter)<<"\n";
		tableCounter++;
	}	
}
