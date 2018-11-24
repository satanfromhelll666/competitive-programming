#include <bits/stdc++.h>
using namespace std ;

int main() {



 int n,a,arr[100],x,temp=0;

 cin>>n>>x;
 for(int i=0;i<n;i++)
 {
     cin>>arr[i] ;
 }

 for(int i=0;i<n-1;i++)
 {
     if(arr[i] > arr[i+1])
     {
          a = arr[i] - arr[i+1];

          if(a> temp)
          {
             temp =a ;
          }

     }

 }
    if(temp-x >0)
    {
        cout<<temp-x;
    } else cout<<0;

    return 0;
}
