#include <iostream>

using namespace std;

int main()
{
    int i,n,sum=0;
    float avg;

    cout<<"Size of array:";
    cin>>n;

    int a[n];
    int min = a[0];
    int max = a[0];

    cout<<"Enter the Values:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        cout<<a[i]<<"\t";
        sum=sum+a[i];
    }
    avg = float(sum)/n;

    cout<<"\nSum is:"<<sum;
    cout<<"\nAverage is:"<<avg;

    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min = a[i];
        }

    }
    cout<<"\nSmallest element is:"<<min;

    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }

    }
    cout<<"\nGreatest element is:"<<max;



}
