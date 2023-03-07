
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int binarysearch(long int arr[],int n,int k)
{
    long int l=0,h=n-1,mid;
    while(l<=h)
    {
        mid=floor((l+h)/2);
        if(arr[mid]==k)
            return 1;
        else if(arr[mid]<k)
            l=mid+1;
        else
            h=mid-1;
    }
    return 0;
}
int main() {
    long int n,m,i;
    cin>>n;
    long int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    cin>>m;
    long int can[m];
    for(i=0;i<m;i++)
        cin>>can[i];
    for(i=0;i<m;i++)
    {
        if(binarysearch(arr,n,can[i]))
            cout<<"Happy Halloween!"<<endl;
        else
            cout<<"Tricky!"<<endl;
    }
    return 0;
}
