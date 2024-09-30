//write a c++ program to concatenate two strings using pointers.
#include<iostream>
using namespace std;

int main()
{
	int a[10],n,*p,i;
	cout<<"Enter the size of the array:"<<endl;
	cin>>n;
	cout<<"Enter the element of array:"<<endl;
	p=a;
	for(i=0; i<n; i++)
	{
		cin>>*p;
		p++;
		
	}
	cout<<"Display array using pointer:"<<endl;
	p=a;
	for(i=0; i<n; i++)
	cout<<a[i]<<" ";
}

