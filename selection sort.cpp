#include<iostream>
using namespace std;
//selection sort
//select one element and compare with remaining elements in list
int main()
{
	int a[]={5,8,2,4,55,6};
	int n;
	n=sizeof(a)/sizeof(a[0]);
	int i,j,temp,min;
	for(i=0;i<n;i++)
	{   min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	cout<<"after sorting the array elemants:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}
