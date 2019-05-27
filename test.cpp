/*

important basics

*/

#include <iostream> //iostream required for cout and cin o.w. compile time error
#include <stdio.h>  //optional, can be used instead of iostream if not using cin and cout
#include <bits/stdc++.h>        //optional, includes almost everything you need
#include <string>     //for strings
#include <vector>     //for vectors
using namespace std;    //namespace required for cout and cin o.w. compile time error


#define LIMIT 5     //macro: preprocesses the code
                    //define diretive

#define AREA(mac1,mac2) (mac1 * mac2) //macro with arguments
                //no space between AREA and its arguments o.w. compile time error


int main()      //do not insert anything inside () o.w. compile time error
    // int main(int argc, char * argv[]) is optional
    
    //main must return int
    // void main() may work in some compilers, but avoid it

{

    int x=1;    //int takes 4 bytes i.e. 32 bits 
                //ranges from -(2^31) to +(2^31 - 1)
    int y=1.8; //allowed,  gives warning, takes the greatest integer less than equal to
    
    char c1 = 66; //doesnt give any error, character corresponding to the ascii value stored in c1
    
    char c2 = 'c';  // '' for character, "" for string
    
    // char c3 = "c"; // gives compile time error
    
    //char takes 1 byte i.e. 8 bits
    //ranges from 0 to +(2^8 - 1) or -(2^7) to +(2^7 -1)
    
    bool b1 = true;
    bool b2 = -2; //can be done, 0 is false and anything apart from 0 is true
    bool b3 = 5;        //bool takes 1 byte i.e. 8 bits
    
    float f1 = 1; //allowed, taken as 1.0
    float f2 = -2.4;        //float takes 4 bytes i.e. 32 bits
    
    double d1 = 200; //allowed, taken as 200.0
    double d2 = 1.9993; //double takes 8 bytes i.e. 64 bits
    
    //void v1;    //compile time error 'incomplete type'
    //void type cannot be assigned or declared
    
    long l1;            //long takes 8 bytes i.e. 64 bits

    long int l2;  //long int is same as long
    
    // long and short can be written before any primitive data type
    //long doubles the size of data type
    //short halves the size of data type
    //unsigned keeps the size same, but range starts from 0
    //signed and unsigned can written before an primitive data type
    
    wchar_t w; //wide character type
                //character with size 2 or 4 bytes instead of usual 1 byte
    
    cerr << "error" <<endl; //doesn't store in buffer, just prints
    clog << "error"  <<endl; // stores in buffer and also prints
    
    
    //for an data type, if range is exceeded, then the least value from the range is assigned to the variable except bool
    
    cout<<LIMIT<<endl;
    
    
    cout<<AREA(22,3)<<endl;
        
    return 0;       //return not compulsory despite of main being an int function, it is implicitely considered as return 0
            // 0 means successful execution
            //main returns the value to the system that invokes it
                    //blank return (return ;) gives compile time error
    
}