#include<iostream>
using namespace std;
int prime(int n);
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;

    int p = prime(n);
    return 0;
}

int prime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"Not Prime Number";
            break;
        }
        else{
            cout<<"Prime";
            break;
        }
    }
    return 0;
}
