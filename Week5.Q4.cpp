//Write a program to find second largest element integer in a list of integer.
#include<iostream>
using namespace std;

int arr[9],i,large,secondlarge;
int main()
{
	cout<<"Enter the integer values in array:"<<endl;
	for(i =0; i<9; i++)
	{
		cin>> arr[i];
	}
	large = arr[0];
    for(i =0; i<9; i++)
	{
		if (large<arr[i])
		    large = arr[i];
		}	
	secondlarge = arr[0];
	for(i =0; i<5; i++)
	{
		if (secondlarge<arr[i])
		{
			if(arr[i]!=large)
			secondlarge = arr[i];
		}
	}
	cout<<"Second largest element = "<<secondlarge;
	return 0;
}
