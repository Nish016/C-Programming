#include<iostream>
using namespace std;

int main()
{
    int k,i,j,temp,n;

    cout<<"Enter size of array:";
    cin>>n;

    int a[n];
    cout<<"Elements are:";
    for(k=0;k<n;k++)
    {
        cin>>a[k];
    }
    for(i=0;i<=n-1;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
            if(a[j]<a[i])
            {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            }
        }
    }
    cout<<"Printing Sorted Element List ..."<<endl;
    for(i = 0; i<n; i++)
    {
        cout<<"\n"<<a[i];
    }
}
