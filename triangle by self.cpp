#include<iostream>
using namespace std;
int main()
{
	
	int i,j,space, rows;
	cout<<" enter number of rows"<<endl;
	cin>>rows;
	for(int i=1; i<=rows; i++)
	{
		for(space=1; space<=i; space++)
		cout<<" ";
		
		for(j=rows*2; j>2*i-1; --j)
		
			cout<<"*";
			
		
		
		
		cout<<endl;
	}
	return 0;
}
