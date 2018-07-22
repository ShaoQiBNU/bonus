#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        vector<int>a(n,0);

        for(int i=0;i<n;i++)
            cin>>a[i];


        vector<int>b(n,1);

        for(int i=1;i<n;i++)//从前往后
            if(a[i]>a[i-1])
                b[i]=b[i-1]+1;

        for(int i=n-2;i>=0;i--)//从后往前
            if(a[i]>a[i+1]&&b[i]<b[i+1]+1)
                b[i]=b[i+1]+1;

        long sum=0;
        for(int i=0;i<n;i++)
            sum+=b[i];

         cout<<sum<<endl;
    }
}