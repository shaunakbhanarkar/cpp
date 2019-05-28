/*

important basics part 2

*/
#include<iostream>
using namespace std;


int main()
{
    int a,b;
    a = 1;
    b = 2 * a++;
    // gives a=2 and b=2
    
    a = 1;
    b = 2 * ++a;
    //gives a=2 and b=4
    
    a = 1;
    b = 2 * a--;
    // gives a=0 and b=2
    
    a = 1;
    b = 2 * --a;
    //gives a=0 and b=0
    
    /*
    
    && logical and  & bitwise and
    || logical or   | bitwise or
    ! logical not   ~ bitwise not
    ^ bitswise xor
    
    */
    
    a=10;
    b=5;
    b+=a; //b = b + a;
    
    a=10;
    b=5;
    b-=a; //b = b - a;
    
    a=10;
    b=5;
    b=+a; //b = 0 + a;
    
    a=10;
    b=5;
    b=-a; //b = 0 - a;
    
    
    a=10;
    b=5;
    b*=a; //b = b * a;
    
    a=10;
    b=5;
    b/=a; //b = b / a;
    
    a=10;
    b=5;
    b=*a; //compile time error, 'argument required'
    
    a=10;
    b=5;
    b=/a; //compile time error, 'argument required'
    
    //sizeof() - gives size in bytes
    int z;
    cout<<sizeof(int)<<endl;
    cout<<sizeof(z)<<endl;
    //both will give same answer
    
    
    
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
    
}