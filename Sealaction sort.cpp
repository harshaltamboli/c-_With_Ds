//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int i,j,n,temp,a[50];
//	
//	cout<<"Enter the Element :";
//	cin>>n;
//	
//	cout<<"Enter THe Any Value";
//	
//	for(i=0;i<n;i++)
// {
//		cin>>a[i];
// }
// 
// 	for(i=0;i<n;i++)
// 	{
//	 
//	  for(j=i+1;j<n;i++)
//	    {
//		   if(a[i]>a[j])
//		    {
//		     temp=a[i];
//			  a[i]=a[j];
//			  a[j]=temp;
//	    	}
//		
//    	}
//	
//   }
//  cout<<" array is sorting\n";
//  for(i=0;i<n;i++)
//  {
//  	cout<<a[i]<<" ";
//  }
//return 0;
//}


#include<iostream>
using namespace std;

int main()
{
    int i, j, n, temp, a[50];

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Selection Sort algorithm
    for (i = 0; i < n  ; i++) // Corrected loop termination condition
    {
        for (j = i + 1; j < n; j++) // Corrected loop termination condition
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    cout << "Sorted array is: ";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

