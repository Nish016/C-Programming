#include<iostream>
using namespace std;
int add(int a , int b)
{
    int c=a+b;
    return c;
}
int main()
{
   int a,b;
   cout<<"Enter first number:";
   cin>>a;

   cout<<"Enter second number:";
   cin>>b;
int g = add(a,b);
   cout<<"Sum is:"<<g;
   return 0;
}

