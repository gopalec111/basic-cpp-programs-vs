#include<iostream>
using namespace std;
int main()
{
	int i,j,n,temp;
	int arr[10];
	cout<<"enter size"<<"\n";
	cin>>n;
	cout<<"enter elements"<<"\n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"sorted elements";
	for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}
}


	
	


