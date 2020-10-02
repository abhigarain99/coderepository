#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i=0,i2=0,i3=0,i5=0,j=0,n=0,arr[1000];
	cin>>n;
	arr[0]=1;
	i2=i3=i5=0;
	for(i=1;i<n;i++)
	{
		j=min(arr[i2]*2,min(arr[i3]*3,arr[i5]*5));
		arr[i]=j;
		if(j==arr[i2]*2)
			i2=i2+1;
		if(j==arr[i3]*3)
			i3=i3+1;
		if(j==arr[i5]*5)
			i5=i5+1;
	}
	for(i=0;i<n;i++)cout<<arr[i]<<" ";
	return 0;
}
