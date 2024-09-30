//Write a program for reading elements using a pointer into the array and display the values using an array.
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

