#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
   int n,k;cin>>n>>k;
   int a[n];
   for(int &x:a){
    cin>>x;
   }
   sort(a,a+n);
   /*TwoSum
   int l=0,count=0;
   for(int l=0;l<n;l++){
    int r=n-1;
    while(l<r){
        if(a[l]+a[r]==k){
            count ++;
        }
        else if(a[l]+a[r]<k) l++;
        else r--;
    }
   }
   cout<<count;
   */
  /*ThreeSum
  int count=0;
  for(int i=0;i<n;i++){
    int l=i+1,r=n-2;
    while(l<r){
        if(a[l]+a[r]==k-a[i]){
            count++;
        }
        else if(a[l]+a[r]<k-a[i]){
            l++;
        }
        else r--;
    }
  }
  cout<<count;
  */
    
    return 0;
}
