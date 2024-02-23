#include<iostream>
#include<set>
#include<map>
#include<vector>
using namespace std;
#define MAX 100
//use diderancearray
int a[20005];
int f[20005];
int main()
{
    int n,k,q;cin>>n>>k>>q;
    for(int i=1;i<=n;i++)
    {
        int l,r;cin>>l>>r;
        a[l]+=1;
        a[r+1]-=1;
    }
    for(int i=1;i<20000;++i){
        a[i]+=a[i-1];

    }
    int count =0;
    for(int i=1;i<20000;++i)
    {
        if(a[i]>=k)  ++count;
        f[i]=count;
    }
    while(q--){
        int l,r;cin>>l>>r;
        cout<<f[r]-f[l-1]<<endl;
    }


    return 0;
}
