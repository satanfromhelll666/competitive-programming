#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n1,n2,count=0,temp1,sum=0,max=0,min=0;

    cin>>n1;
    cin>>n2;

    vector<int>vec;

    for(ll i=0;i<n1;i++)
    {
        cin>>temp1;
        vec.push_back(temp1) ;
    }

   for(ll i=0;i<n1;i++)
    {
        sum = sum +vec[i] ;

    }

    max= *max_element(vec.begin(),vec.end()) ;

    sort(vec.begin(),vec.end());



    for(auto i=0;i<n1;i++)
    {
        if(vec[i]>min)
        {
            min++;
        }
    }

    cout<<sum-(n1+max - min) ;

    return 0;

}
