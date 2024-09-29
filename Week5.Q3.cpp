//Write a c++ program to find the length of the array
#include<iostream>
using namespace std;

int main()
{

	int arr[] ={1,2,3,4};
	int n= sizeof(arr[0]);
	
	cout<<"Array :";
	for ( int i=0; i<n; i++){
	cout<<arr[i]<<" ";
}
cout<<"Length of an array:"<<n<<endl;
return 0;	
	
}
