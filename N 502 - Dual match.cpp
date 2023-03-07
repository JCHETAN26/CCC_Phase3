#include <cmath>
#include <cstdio>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }int tar;
    cin>>tar;
    int count=0;
    sort(arr,arr+a);
    int i=0;
    while(i<a){
        int k=tar-arr[i];
         if (binary_search(arr, arr + a, k)){
             count++;
         }
        i++;
    }
     
    cout<<count;
    return 0;
}
