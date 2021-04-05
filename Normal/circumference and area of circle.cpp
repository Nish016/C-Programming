#include<iostream>
using namespace std;

float circumference(int r);
float area(int r);

int main()
{
    int r;

    cout<<"Enter the radius:";
    cin>>r;

    float circum = circumference(r);
    float areac = area(r);

    cout<<"Circumference is:"<<circum<<endl;
    cout<<"Area is:"<<areac;
    return 0;
}

    float circumference(int r)
    {
        return 2*3.14*r;
    }

    float area(int r)
    {
        return 3.14*r*r;
    }
