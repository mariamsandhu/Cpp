#include <iostream>
using namespace std;
int main(){
	int x,a,ratio,sum=0;
	cout<<"Enter the integer\n";
	cin>>x;
	a=x;
	while(x!=0){
	      ratio=x%10;
		sum=sum+ratio;
		    
		  x=x/10;
		  
	}
	cout<<"The sum of digits is"<<"  "<<sum<<endl;
	
}
