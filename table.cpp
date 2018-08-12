#include <iostream>
using namespace std;
int main(){
	int tableNo,Tablecounter=1, tableLength;
	cout<<"Enter table no\n";
	cin>>tableNo;
	cout<<"Enter table length\n";
	cin>>tableLength;
	while (Tablecounter <= tableLength){
		cout<<tableNo<<"*"<<Tablecounter<<"="<<(tableNo*Tablecounter)<<endl;
		Tablecounter++;
	}
}
