#include<iostream>
using namespace std;
int main(){
	int table_no,tableLength,tableCount=1;
	cout<<"Enter the table no.\n";
	cin>>table_no;
	cout<<"Table Length is\n";
	cin>>tableLength;
	do{
		
	   cout<<table_no<<"*"<<tableCount<<"="<<table_no*tableCount<<endl;	
	   tableCount++;
	   
	}while(tableCount<=tableLength);
}
