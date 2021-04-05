#include<iostream>
using namespace std;
void insertionSort(int a[], int n);
int main()
{
    int n,i;
    cout<<"Enter the size of array: ";
    cin>>n;

    int a[n];
    cout<<"Elements are: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    insertionSort(a,n);
    cout<<"Sorted elements are: ";
    for(i=0;i<n;i++)
    {
        cout<<" "<<a[i]<<" ";
    }

 return 0;
}

void insertionSort(int a[], int n)
{
    int j,key;
    for(int i = 1;i<n;i++)
    {
        key = a[i];
        j=i-1;

        while(j>=0 && a[j]>key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }


}
