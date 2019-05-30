/*

important basics part 4

*/
#include <iostream>
using namespace std;

int main()
{
    int x=5;
    
    
    //block 1 and block 2 are equivalent?
    
    
    //block 1
    if (x>12)
    {
        cout<<"yes1";
    }
    else if (x>7)
    {
        cout<<"no1";
    }
    else
    {
        cout<<"useless1";
    }
    
    //block 2
    if (x>12)
    {
        cout<<"yes2";
    }
    else
    {
        if (x>7)
        {
            cout<<"no2";
        }
        else
        {
            cout<<"useless2";
        }
    }
    
    
    //executing both if and else blocks
    
    if (x>0)
    {
        label1 :    cout<<"if"<<endl;
        
        goto label2;        //use of goto statement
    }
    else
    {
        label2 :    cout<<"else"<<endl;
    }
    
    
    x = 10;
    
    
    //switch case
    
    switch (x)
    {
        case 2: cout<<"two"<<endl;
            break;
            
        case 10:    cout<<"ten"<<endl;
            break;      //continue not allowed
            
        default:    cout<<"Def"<<endl;
            
    }
    
    //switch case
    
    switch (1+9)        //constants expression allowed
    {
        case 2: cout<<"two"<<endl;
            break;
            
        case 10:    cout<<"ten"<<endl;
            break;      //continue not allowed
            
        default:    cout<<"Def"<<endl;
            
    }
    
    //switch case
    int y=2;
    switch (x+y)        //variable expression not allowed
    {
        case 2: cout<<"two"<<endl;
            break;
            
        case 10:    cout<<"ten"<<endl;
            break;      //continue not allowed
            
        default:    cout<<"Def"<<endl;
            
    }
    
    //duplicate case values not allowed
    //default statement is optional
    //break statement is optional
    //nesting of switch statements allowed
}
