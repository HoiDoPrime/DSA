#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;
#define MAX 100
int d[101]={0};

int check(int a[],int n)
{
    for(int i=0;i<n;++i)
    {
        if(a[i]==25)
        {
            d[25]++;
        }
        else if(a[i]==50){
            if(d[25]==0) return 0;
            else d[50]++;
            d[25]--;
        }
        else 
        {
            if(d[50]>=1 && d[25]>=1){
            d[25]--;
            d[50]--;
            d[100]++;
            }
            else if(d[25]>=3)
            {
                d[25]-=3;
                d[100]++;
            }
            else return 0;
        }

    }
    return 1;
}
int main()
{
  int n;cin>>n;
  int a[n];
  for(int &x:a) cin>>x;
  if(check(a,n))
  {
    cout<<"YES";
  }
  else cout<<"NO";
  return 0;
}
