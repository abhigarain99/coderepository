//longest increasing subsequence		tushar roy
#include<bits/stdc++.h>
using namespace std;

int lis_tabl(int arr[],int n)
{
	int dp[n],maxm=INT_MIN,i=0,j=0;
	dp[0]=1;
	for(i=1;i<n;i++)
	{
		dp[i]=1;
		for(j=0;j<i;j++)	
			{
				if(arr[i]>=arr[j]&&dp[i]==dp[j])
				dp[i]++;
				maxm=max(dp[i],maxm);
			}
	}
	cout<<maxm<<endl;
}
int main()
{
//	int arr[]={10,20,11,-1,3,4,33,45,9};
	int arr[]={-1,-3,0,-1,3};
	int n=sizeof(arr)/sizeof(int);
	lis_tabl(arr,n);
	return 0;
}
