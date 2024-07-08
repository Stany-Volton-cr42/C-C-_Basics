#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[100];
    int size=8;
    for(int i=0; i<size;i++) cin>>arr[i];
    int k=4;
    for(int i=size-1;i>=k;i--)arr[i+1]= arr[i];
    arr[k]=100;
    for(int i=0; i<8;i++)cout<<arr[i]<<" ";
    return 0;
}