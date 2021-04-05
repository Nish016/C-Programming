#include<iostream>
using namespace std;

int LinearSearch(int a[] , int key)
{
    int i;
    for(i=0;i<6;i++)
    {
        if(a[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int a[6] = {1,5,2,7,9,3};

    int location = LinearSearch(a,5);
    (location == -1) ? cout<<"Element Not Found" : cout<<"Element Found at Location: "<<location;
    return 0;
}

