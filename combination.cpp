#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter three numbers\n";
	cin>>a>>b>>c;
	if((a!=b) && (b!=c) && (c!=a)){
		cout<<a<<b<<c<<endl;
		cout<<a<<c<<b<<endl;
		cout<<b<<c<<a<<endl;
		cout<<b<<a<<c<<endl;
		cout<<c<<b<<a<<endl;
		cout<<c<<a<<b<<endl;
	
	}else if((a==b) && (b==c) && (c==a)){
			cout<<a<<b<<c<<endl;
	}else if (a==b){
				cout<<a<<b<<c<<endl;
				cout<<a<<c<<b<<endl;
				cout<<c<<b<<a<<endl;
	}else if(b==c){
       				cout<<b<<c<<a<<endl;
       				cout<<b<<a<<c<<endl;
       				cout<<c<<a<<b<<endl;
    }else if(c==a){
       					cout<<c<<a<<b<<endl;
       					cout<<c<<b<<a<<endl;
       					cout<<a<<b<<c;
    }
}
