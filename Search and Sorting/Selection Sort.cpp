#include<iostream>
using namespace std;

void insertionSort(int a[], int n);
void printArray(int *a ,int n);

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
void insertionSort(int a[], int n)
{
    int min,i,j,temp;

    for(i=0;i<n-1;i++)
    {
        min = i;
        for(j=i+1;j<=n-1;j++)
        {
            if(a[j]<a[min])
            {
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
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
