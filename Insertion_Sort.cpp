// insertion sort 

#include<iostream>
using namespace std;

int main()
{
	int i ,j,n,temp,a[30];
	
	cout<<"Enter the Element";
	cin>>n;
	
	cout<<"Please Enter The Any NO";
	
	for(i=0;i<n;i++)
	{
		cin>> a[n];
	}
	
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		
		while((j>=0)&&(a[j]> temp))
		{
			a[j+1] = a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
	cout<<"\n sorted list as follow \n";
	
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	

	return 0;
}
