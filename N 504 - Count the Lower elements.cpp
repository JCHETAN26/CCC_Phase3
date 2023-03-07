
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int n,m;
    cin>>n>>m;
    long long int i,arr[n],brr[m],count[m],j;
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<m;i++)
        cin>>brr[i];
    sort(arr,arr+n);
    for(i=0;i<m;i++)
        count[i]=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(brr[i]>=arr[j])
                count[i]++;
            else
                break;
        }
    }
    for(i=0;i<m;i++)
        cout<<count[i]<<" ";
    return 0;
}
