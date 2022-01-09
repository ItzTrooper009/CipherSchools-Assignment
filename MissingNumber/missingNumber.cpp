#include<iostream>

using namespace std;

int missing(int a[], int n)
{
    int sum= n*(n+1)/2;
    int asum=0;
    for(int i=0; i<n; i++)
    {
        asum=asum+a[i];
    }
    sum=sum-asum;
    return sum;
}

int main()
{
    int arr[]={3,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int miss=missing(arr,n);
    cout<<miss;
}
