//Write a c++ program to concatenate two strings using pointer.
#include<iostream>
using namespace std;

int main()
{
	string a,b;
	string *ptr1,*ptr2;
	cout<<"string 1:";
	cin>>a;
	cout<<"string 2:";
	cin>>b;
	
	ptr1=&a;
	ptr2=&b;
	
	*ptr1=*ptr1+*ptr2;
	
	cout<<"concatenated string is:"<<*ptr1;
}
