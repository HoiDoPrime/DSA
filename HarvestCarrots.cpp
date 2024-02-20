#include<iostream>
using namespace std;
#define MAXR 100
#define MAXC 100
/*one-dimensional array
  long long pre[n]
  for(int i=0;i<n;i++)
  {
    pre[i]=pre[i-1]+arr[i];
  }*/
void matrixinput(int a[MAXR][MAXC],int &n,int &m)
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
    
}
// complexity : O(N*M)
int HarvestCarrots(int a[MAXR][MAXC],int q)
{
    cin>>q;
    while(q--)
    {
        int r1,r2,c1,c2;cin>>r1>>r2>>c1>>c2;
        long long sum=0;
        for(int i=r1;i<=r2;++i)
        {
            for(int j=c1;j<=c2;++j)
            {
                sum+=a[i][j];
            }

        }
        cout<<sum<<endl;
    }
}
/*treatment for problems with two-dimensional array means: 
  prefix[i][j]=prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1](intersection of two rectangles)+arr[i][j](the rest of the new rectangles)
*/

int HarvestCarrots(int a[MAXR][MAXC],int p,int &n,int&m)
{
    long long prefix[MAXR][MAXC];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<m;++j)
        {
           prefix[i][j]=prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1]+a[i][j];
        }
    }

    cin>>p;
    while(p--)
    {
        int r1,r2,c1,c2;cin>>r1>>r2>>c1>>c2;
        cout<<prefix[r2][c2]-prefix[r1-1][c2]-prefix[r2][c1-1]+prefix[r1-1][c1-1]<<endl;

    }
}

int main()
{
    int n,m,q,p;
    int a[MAXR][MAXC];
    matrixinput(a,n,m);
    //HarvestCarrots(a,q);
    HarvestCarrots(a,p,n,m);
    return 0;
}
