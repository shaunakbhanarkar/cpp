/*

important basics part 3

*/
#include <iostream>
using namespace std;

int myfunction( int ,int); //required in some cases

int myfunction(int x, int y)    // x and y are formal paramters
{
    if (x > y)
    {
        x = x-y;
        return x;
    }
    return y;
}

int passbyvaluefunction( int x)
{
    return x>>4;
}

int passbyreferencefunction( int *p)
{
    return *p;
}

bool voidfunction()     //is equivalent to voidfunction(void)
{
    return true;
}
int main()
{
    //functions   
    
    int res = myfunction( 2, 5); //2 and 5 are actual parameters
    
    int a = 5;
    
    int * p = &a;   //defining pointer p to point to a
    
    cout<<p<<endl;      //p is address of a
    cout<<*p<<endl;     //*p is value of a
    cout<<a<<endl;      
    cout<<&a<<endl;     //&a is adress of a
}