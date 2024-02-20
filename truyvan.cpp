#include<iostream>
#include<set>
#include<map>
#include<algorithm>
using namespace std;
#define MAXN 100
int main()
{
    int n,q,a[n];cin>>n>>q;
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
    }
    int d[n+5]={0};
    while(q--)
    {
        int l,r;cin>>l>>r;
        --l;--r;
        d[l]+=1;
        d[r+1]-=1;
    }
    int F[n];
    F[0]= d[0];
    for(int i=1;i<n;++i)
    {
        F[i]=F[i-1]+d[i];
    }
    sort(F,F+n,greater<int>());
    sort(a,a+n,greater<int>());
    long long res=0;
    for(int i=0;i<n;++i)
    {
        res+=a[i]*F[i];
    }
    cout<<res<<endl;


}
