#include<iostream>
using namespace std;
int main(){
	int a,b;
	char c;
	
	cout<<"Enter the First value\n";
	cin>>a;
	
	cout<<"Enter +,-,*,/ operators\n";
	cin>>c;
	
	cout<<"Enter the Second value\n";
	cin>>b;
	
	if(c=='+'){
//		agr user + add kary ga yeh chaly gi nahe to pehli elseif ki trf chala jayga
	cout<<a <<" ^ "<<b<<" = "<< a + b;
	}else if(c=='-'){
//		agr yeh true hui to minus perform karengy nahe to next elseif check hogi
	cout<<a <<" \\ "<<b<<" = "<< a - b;
	}else if(c=='*'){
//		same
	cout<<a <<" * "<<b<<" = "<< a * b;
	}else if(c=='/'){
//		same
	cout<<a <<" / "<<b<<" = "<< a / b;
	}else{
//		yeh condition tab chaly gi jab uper wali koi bhi true na hui yahan pe hum message show karwa dengy
//		operator ghalat input kia he
	cout<<"invalid operator";
	}
}
