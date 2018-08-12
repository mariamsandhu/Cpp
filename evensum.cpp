#include <iostream>
using namespace std;
int main(){
	int a,evensum=0,oddsum=0;
	cout<<"Value of a\n";
	cin>>a;
	while(a>=1){
		if(a%2==0){
	          evensum=evensum+a;
		}else{
			  oddsum=oddsum+a;
		}
		a--;
	}
	cout<<"Evensum is"<<evensum<<endl;
	cout<<"Oddsum is"<<oddsum<<endl;
}
