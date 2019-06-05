/*
    program to print all prime numbers <=n
    n is input by user
*/

#include<iostream>
using namespace std;

bool isprime(int x)
{
    if (x<=1)
        return false;
    if (x<=3)
        return true;
    for (int i=2;i<x;i++)       //i<sqrt(x) can be done using math.h
    {
        if (x%i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    for (int i=2;i<=n;i++)
    {
        if (isprime(i))
            cout<<i<<endl;
    }
}