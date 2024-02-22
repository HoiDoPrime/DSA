#include<iostream>
#include<map>
#include<set>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;
#define MAX 100

int main()
{
    int n,m;cin>>n>>m;
    int a[n],b[m];
    for(int &x:a)
    {
        cin>>x;
    }
    for(int &x:b)
    {
        cin>>x;
    }
    int i=0,j=0;
    while(i<n && j<m){
    if(a[i]<b[j]){
        cout<<a[i]<<' ';
        i++;
    }
    else if(a[i]>b[j])
    {
        cout<<b[j]<<' ';
        j++;
    }
    else
    {
        cout<<a[i]<<' '<<b[j]<<' ';
        i++;
        j++;
    }
    }
    while(i<n)
    {
        cout<<a[i]<<' ';
        i++;
    }
    while(j<m)
    {
        cout<<b[j]<<' ';
        j++;
    }


    return 0;
}
