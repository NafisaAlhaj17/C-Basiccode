//Write a c++ program to multiply two array.
#include<iostream>
using namespace std;

int main()
{
	int row1,column1,row2,column2;
	cout<<"Enter size of row for first matrix:";
	cin>>row1;
	cout<<"Enter size of column for first matrix:";
	cin>>column1;
	
	int M1[row1][column1];
	cout<<"Enter first matrix element:";
	for(int i=0; i<row1; i++)
	{
		for(int j=0; j<column1; j++)
		{
			cin>> M1[i][j];
		}
		
	}
	cout<<"First matrix elements:"<<endl;
	for(int i=0; i<row1; i++)
	{
		for(int j=0; j<column1; j++)
		{
			cout<< M1[i][j]<<" ";
		}
		cout<<endl;
	}
	//Second matrix
	cout<<"Enter size of row for second matrix:";
	cin>>row2;
	cout<<"Enter size of column for second matrix:";
	cin>>column2;
	int M2 [row2] [column2];
	cout<<"Enter second matrix element:";
	for(int i=0; i<row2; i++)
	{
		for(int j=0; j<column2; j++)
		{
			cin>> M2[i][j];
		}
	}
	cout<<"second matrix element:"<<endl;
	for(int i=0; i<row2; i++)
	{
		for(int j=0; j<column2; j++)
		{
			cout<< M2[i][j]<<" ";
		}
		cout<<endl;
	}
	if(column1==row2)
	{
		int mul[row1][column2];
		for(int i=0; i<row1; i++)
		{
			for(int j=0; j<column2; j++)
			{
				mul[i][j]=0;
				for(int k=0; k<column1; k++)
				{
					mul[i][j] += M1[i][k]*M2[k][j];
				}
			}
		}
	
	cout<<"Matrix Multiplication:"<<endl;
	for(int i=0; i<row1; i++)
        {
        	for(int j=0; j<column1; j++)
        	{
        		cout<<mul[i][j]<<" ";
			}
			cout<<endl;
		}	
	}
		else
		{
			cout<<"Matrix Multiplication is not possible";
		
			}
		
			
}
