//Write a c++ program to reverse a string using pointers.
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char *str="welcome to disney world!";
	cout<<"original string:"<<str;
	cout<<endl<<"string after reverse:";
	for(int i=(strlen(str)-1); i>=0; i--)
	{
		cout<<str[i];
	}
	return 0;
}
