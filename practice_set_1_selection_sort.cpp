// selection sort

#include<iostream>
using namespace std;

int main()
{
	int i, j, temp, n, a[50];
	
	cout<<"Enter The No:";
	cin>>n;
	
	cout<<"Enter The Any No:";
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
 	   for(i=0;i<n;i++)
		{
			for(j=i+1; j<n; j++)		
			{
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
				
			}
		}
		
		cout<<"Sorting After Elements\n";
		for(i=0;i<n;i++)
		{
			cout<< a[i];
		}
	return 0;
}
