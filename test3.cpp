/*

important basics part 3

*/
#include<iostream>
using namespace std;

int main()
{
    //? : operator
    
    int x=10;
    int res = (x<4)? 5 : 6;
    
    bool r = (x<4)? true : false;
    
    char c = (true) ? 'y' : 'n';
    
    cout<<c<<endl;
    
    //bitwise right and left shift
    
    int z=4;
    
    cout<<(z<<1)<<endl; //  z*2
    
    cout<<(z>>1)<<endl; //  z/2
    
    int i;
    
    //for loop
    
    for ( i=1 ; i<=10 ; i++)
    {
        cout<<i<<" ";
    }
    
    cout<<endl;
    
    //equivalent while loop
    
    i=1;
    
    while (i<=10)
    {
        cout<<i<<" ";
        i++;
    };              //better to place semi colon, may work w/o semi colon as well
    
    cout<<endl;
    
    //equivalent do-while loop
    
    i=1;
    
    do
    {
        cout<<i<<" ";
        i++;
    }
    while (i<=10);  //semi colon required o.w. compile time error 'expected...'
    
    cout<<endl;
    
    
    //this infinite loop is allowed
    i=1;
    for (   ;   ;   )
    {
        cout<<i;
    }
    
    //this infinite loop is allowed
    i=1;
    for (i=7;   ;   )
    {
        cout<<i;
    }
    
    //this infinte loop is allowed
    i=1;
    for (   ;i<9;   )
    {
        cout<<i;
    }
    
    //this inifinte loop is allowed
    i=1;
    for (   ;   ;i++)
    {
        cout<<i;
    }
    
    
}