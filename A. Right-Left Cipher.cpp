#include<bits/stdc++.h>
#define ll long long
#define a auto
#define loop(q, n) for(a i = q; i < n; ++ i)
#define pb push_back


using namespace std;

int main() {
     ll n1=0, n2=0, sum = 0, min = 0, count = 0, count1 = 1, vtemp = 0;

    char s[100];
    char s1[100];
    char s2[100];
    cin>>s;
    sum= strlen(s);

   count= sum/2;
   count1=sum/2+1;


    if(sum%2==0)
    {
        s1[n1] =s[count-1] ;
        n1++;
        for( ll i=1;i<count+1;i++)
        {
            if(n2%2==0)
            {
                s1[n1]=s[count+i-1];
                n2++;
                n1++;
            }

            if(n2%2==1)
            {
                s1[n1]=s[count-i-1];
                n2++;
                n1++;


            }

        }
    }

    else
        s1[n1] =s[count1-1] ;
    n1++;

    for( ll i=1;i<count1+1;i++)
    {
        if(n2%2==0)
        {
            s1[n1]=s[count1+i-1];
            n2++;
            n1++;
        }

        if(n2%2==1)
        {
            s1[n1]=s[count1-i-1];
            n2++;
            n1++;


        }

    }
    s1[sum]='\0';
    cout<<s1;

    return 0;
}
#https://codeforces.com/contest/1087/problem/A
