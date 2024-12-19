#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"enter num 1";
	cin>>a;
	cout<<"enter num 2";
	cin>>b;
	c=a;
	a=b;
	b=c;
	cout<<"AFTER SWAPPING :"<<a<<","<<b;
	return 0;
	
	
	}