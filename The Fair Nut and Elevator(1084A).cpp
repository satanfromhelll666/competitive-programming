#include<bits/stdc++.h>
#define ll long long
#define a auto
#define loop(i, n) for(a i = 0; i < n; ++ i)
#define pb push_back


using namespace std;

int main()
{
    int n1,temp,sum=0;
    cin>>n1;

    vector<int> vec;

    loop(i,n1)
    {
        cin>>temp;
        vec.pb(temp);
    }

    for(int i=1;i<n1;i++)
    {
        sum = sum+ vec[i] *4*i;
    }

    cout<<sum;

    return 0;
}
