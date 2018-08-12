#include<iostream>
using namespace std;
int main(){
	int grade;
	float salary,bonus;
	cout<<"Enter grade"<<endl;
	cin>>grade;
	cout<<"Enter salary"<<endl;
	cin>>salary;
	if(grade>15){
		bonus=salary*50.00/100;
	}else{
		bonus=salary*25.0/100;
	}
	cout<<"your total salary is"<< salary+bonus;
	
}
