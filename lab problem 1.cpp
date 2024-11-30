#include<bits/stdc++.h>
using namespace std;
int main ()
{
    vector<int>v;
    while(true)
    {
        int n;
        cin>>n;
        if(n==-1)
            break;
        v.push_back(n);
   }
    for(int x:v)
    {
        cout<<x<<" ";
    }
   // int p=v.size();
   // cout<<"size="<<p;
    int min=v.front();
    int max=v.front();
    int p=v.size();
    for(int i=1;i<p;++i)
    {
        if(v[i]>max)
        {
            max=v[i];
        }
        if(v[i]<min)
        {
            min=v[i];
        }
       // {
          //  cout<<v[i];
        //}
    }
    cout<<"min="<<min;
    cout<<"max="<<max;
}
