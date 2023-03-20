#include<iostream>
#include<bits/stdc++.h>
// khub e easy but onk kosto hoilo!
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int i,sum_left=0,sum_right=0,ans=0;


        ///left side
        int x=2;
        for(i=0;i<n/2;i++)
        {
            a[i]=x;
            sum_left=sum_left+x;
            x=x+2;
        }

        ///right side
        int p=1;
        for(i=n/2;i<n;i++)
        {


            while(i==n-1)
            {
                if(sum_right+p == sum_left)
                {
                    ans=1;
                    a[i]=p; break;
                }
                else if (sum_right+p < sum_left)
                {
                    p=p+2;
                }
                else
                {
                    ans=0; break;
                }
            }
            a[i]=p;
            sum_right=sum_right+p;
            p=p+2;
        }

        /// ans check & print
        if(ans==0) {cout<<"NO\n";}
            else
            {
                cout<<"YES\n";
                for(i=0;i<n;i++)
                {
                    cout<<a[i]<<" ";
                }
                cout<<"\n";
            }





    }


    return 0;
}



