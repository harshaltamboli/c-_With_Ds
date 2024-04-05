// Bubble_sort
#include<iostream>
using namespace std;

int main()
{
	int arr[30],num,i;
	
	cout<<"Enter The numer \n";
	cin>>num;
	
	cout<<"Enter The Array Element\n";
	
	for(i=0;i,num;i++)
	{
		cin>>arr[i];
	}
//	bubble_sort(arr,num)
//	getch();
}

void Bubble_sort(int iarr,int num)
{
	int i,j,k,temp;
	
	cout<<"\n Unsorted data";
	
	for(k=0;k<num;k++)
	{
		cout<<iarr[k];
		
	}
	
		for(j=0;j<num;j++)
		{
			if(iarr[j]>iarr[j+1])
			{
				temp = iarr[j+1];
				iarr[j+1] = iarr[j];
				iarr[j] = temp;
			}
		}
		
		cout<<"After pass"<<i<<"\n";
		
		for(k=0;k<n;k++)
		{
			cout<<iarr[k];
		}
}
