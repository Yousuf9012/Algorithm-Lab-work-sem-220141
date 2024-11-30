#include<bits/stdc++.h>
#define pb push_back
#define vi vector<int>
using namespace std;

int partition(vi &a,int l,int h){
    int pivot=a[h],j=l-1;
    for(int i=l;i<h;i++){
        if(a[i]<=pivot)++j,swap(a[i],a[j]);
    }
    swap(a[j+1],a[h]);
    return j+1;
}

void quickSort(vi &a,int l,int h){
    if(l<=h){
        int pi=partition(a,l,h);
        quickSort(a,l,pi-1);
        quickSort(a,pi+1,h);
    }
}

int main()
{
    int sz;     cin>>sz;
    vi a(sz);   for(int i=0;i<sz;i++)cin>>a[i];
    quickSort(a,0,--sz);
    cout<<"Sorted array is : ";
    for(auto i:a)cout<<i<<" ";
}
