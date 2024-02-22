#include<iostream>
#include<set>
#include<map>
#include<vector>
using namespace std;
#define MAX 100
int da[1001]={0};
int db[1001]={0};
int main()
{   
    int m,n;cin>>m>>n;
    int a[m],b[n];
    vector<int> giao,hop;

    for(int &x:a)
    {
        cin>>x;
        da[x]++;
    }
    for(int &x:b)
    {
        cin>>x;
        db[x]++;
        
    }
    for(int i=0;i<1e7;++i)
    {
        if(da[i] && db[i])
        {
            giao.push_back(i);

        }
        if(da[i] || db[i])
        {
            hop.push_back(i);
        }
    }
    for(int x: giao)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    for(int x: hop)
    {
        cout<<x<<" ";
    }
    

    return 0;
}
