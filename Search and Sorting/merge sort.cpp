#include<iostream>
using namespace std;

void mergeSort(int a[], int l, int h);
void Merge(int a[] , int mid , int l, int h);
void printArray(int *a ,int n);

int main()
{
    int n,i;
    cout<<"Enter the size of array: ";
    cin>>n;

    int a[n];
    cout<<"Entered elements are: ";

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    mergeSort(a,0,n-1);

    printArray(a,n);

    return 0;
}



void mergeSort(int a[], int l, int h)
{
    int mid = (l+h)/2;
    if(l<h)
    {
        mergeSort(a,l,mid);
        mergeSort(a,mid+1,h);
        Merge(a,mid,l,h);
    }

}

void Merge(int a[] , int mid , int l, int h)
{
    int i,j,k,b[100];
    i = l , j = mid+1 , k = l;
    while(i<=mid && j<=h)
    {
        if(a[i]<a[j])
        {
            b[k] = a[i];
            i++,k++;
        }
        else
        {
            b[k] = a[j];
            j++,k++;
        }
    }
    while(i<=mid)
    {
        b[k] = a[i];
        i++,k++;
    }
    while(j<=h)
    {
        b[k] = a[j];
        j++,k++;
    }
    for(i=l;i<=h;i++)
    {
        a[i] = b[i];
    }
}
void printArray(int *a ,int n)
{
    cout<<"Sorted Elements are: ";
    for(int i=0;i<n;i++)
    {
        cout<<" "<<a[i]<<" ";
    }
    cout<<"\n";
}
