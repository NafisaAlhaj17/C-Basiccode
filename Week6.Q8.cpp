//Write a program through a pointer variable to the sum of n elements from the array.
#include<iostream>
using namespace std;

int main()
{
     int n,sum=0;
	 cout<<"Enter the size of the array:"<<endl;
	 cin>>n;
	 cout<<"Enter the "<< n <<" elements of the array:"<<endl;
	 int*p=new int[n];
	 for(int i=0; i<n; i++)
	 {
	 	cin>>*p;
	 	p++;
		 }	
		 for(int i=0; i<n; i++)
		 p--;
		 for(int i=0; i<n; i++)
		 {
		 	sum+=*p;
		 	p++;
		 }
		 cout<<"sum of given array is :"<<sum<<endl;
}
