#include<iostream>
using namespace std;

int BinarySearch(int a[],int l,int h,int val);
int main()
{
    int n,k,j,i,temp,val;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int a[n];

    cout<<"Entered elements are: ";

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

        for(j=0;j<=n-1;j++)
        {
            for(k=j+1;k<=n-1;k++)
            {
                if(a[k]<a[j])
                {
                    temp = a[j];
                    a[j] = a[k];
                    a[k] = temp;
                }
            }
        }
    cout<<"Sorted Elements are:\n";
    for(j=0;j<n;j++)
    {
        cout<<a[j]<<"\t";
    }

    cout<<"\n\nEnter the value to be searched: ";
    cin>>val;

    int location = BinarySearch(a,0,n-1,val);

    (location == -1) ? cout<<"\nElement Not Found" :  cout<<"\nSearched value is "<<val<<" and is found at location "<<location<<"\n";

    return 0;
}

int BinarySearch(int a[],int l,int h,int val)
{
    int mid;
    while(l<=h)
    {
        mid = (l+h)/2;

        if(a[mid]== val)
        {
            return mid;
        }
        else if(a[mid]<val)
        {
            l = mid+1;
        }
        else
        {
            h = mid-1;
        }
    }
    return -1;
}

