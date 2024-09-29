//Write a c++ program to find sum of all array element.
#include<iostream>
using namespace std;

int main()
{
	int n,i;
	cout<<"Enter the number of elements :";
	cin>>n;
	
	int arr[n];
	cout<<"Enter " << n << " elements"<<endl;
	
	for(i=0; i<n; i++)
	{
		cin >> arr[i];
	
	}
	int sum =0;
	for(int i=0; i<n; i++){
	
	sum+= arr[i];
}
	cout<<"sum of all elements =" <<sum<<endl;
	return 0;
	
}
