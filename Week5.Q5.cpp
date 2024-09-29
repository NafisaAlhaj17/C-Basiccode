//Write a c++ program to reverse the position of the array element.
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the number of elements:";
	cin>>n;
	
	int arr[n];
	cout<<"Enter " << n << " elements:"<<endl;
	
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Original array:";
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<"";
	}
	reverse(arr,arr+n);
	cout<<endl<<"Reversed Array:";
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<"";
	}
	return 0;
}
