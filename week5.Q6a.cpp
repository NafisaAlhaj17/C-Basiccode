//Write a c++ program to add two matrices.
#include<iostream>
using namespace std;

int main()
{
	int M1[10][10],M2[10][10],res[10][10];
	int row,column,i,j;
	cout<<"Enter the size of matrix:";
	cin>>row>>column;
	
	cout<<endl<<"Enter the element of first matrix:";
	for(i=0; i<row; i++)
	{
		for(j=0; j<column; j++)
	    	cin>>M1 [i] [j];
	}
	cout<<endl<<"Enter the element of second matrix:";
	for(i=0; i<row; i++)
	{
		for(j=0; j<column; j++)
		cin>>M2[i] [j];
	}
	cout<<endl<<"sum of two matrices are:"<<endl;
	for(i=0; i<row; i++)
	{
		for(j=0; j<column; j++)
		{
			res[i] [j]= M1 [i] [j] + M2[i] [j];
			cout<<res[i] [j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
