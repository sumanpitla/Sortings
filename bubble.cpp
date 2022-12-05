#include<iostream>
using namespace std;
int  *bubblesort(int *a,int r,int c)
{
	if(r==0)
	{ 
	return a;
	}
	if(c>r)
	{
	if(a[c]>a[c+1])
	{
		int temp=a[c+1];
		a[c+1]=a[c];
		a[c]=a[c+1];
		bubblesort(a,r,c+1);
	}
}
else
{
	bubblesort(a,r-1,0);
}

}
int main()
{
	int arr[]={2,6,7,8,9,4};
	int r; 
	 r=sizeof(arr)/sizeof(arr[0]);
	int c=0;
	
	int *ar=bubblesort(arr,r-1,c);
	for(int i=0;i<r;i++)
	{
		cout<<ar[i];
	}
	return 0;
}
