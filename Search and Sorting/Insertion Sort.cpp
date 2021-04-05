#include <iostream>
using namespace std;

void insertionSort(int a[] , int n)
{
    int key,j;
    for(int i=1;i<n;i++)
    {
        key = a[i];
        j = i-1;

        while(j>=0 && a[j]>key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
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

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int a[n];
    cout<<"Elements are: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    insertionSort(a,n);


    printArray(a,n);
    return 0;
}

