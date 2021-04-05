#include<iostream>
using namespace std;

int BinarySearch(int a[],int l,int h,int val)
{
    int mid;
    while(l<=h)
    {
        mid = (l+h)/2;
        if(a[mid] == val)
        {
            return mid;
        }
        else if(a[mid]<val)
        {
            l = mid+1;
        }
        else if(a[mid]>val)
        {
            h=mid-1;
        }
    }

    return -1;
}

int main()
{
    int n,l,h;
    cout<<"Enter the size of array:";
    cin>>n;
    int a[n];
    cout<<"Elements are:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int val;
    cout<<"Enter the value you want to search:";
    cin>>val;

    int location = BinarySearch(a,0,n-1,val);

    (location == -1) ? cout<<"Element Not Found" : cout<<"Value is "<<val<<" and is found at location "<<location;
    return 0;
}

