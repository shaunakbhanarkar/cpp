/*

important basics part 6

*/
#include <iostream>
using namespace std;

int main()
{
    // Array declaration by specifying size 

    int n = 10; 
    int arr2[n]; 


    // Array declaration by initializing elements 
    int arr[] = { 10, 20, 30, 40 } ;

    // Compiler creates an array of size 4. 
    // above is same as "int arr[4] = {10, 20, 30, 40}" 
    
    
    
    // Array declaration by specifying size and initializing 
    // elements 
    int a[6] = { 10, 20, 30, 40 } ;

    // Compiler creates an array of size 6, initializes first 
    // 4 elements as specified by user and rest two elements as 0. 
    // above is same as "int arr[] = {10, 20, 30, 40, 0, 0}" 


    //no index out of bound checking
    int b[8];
    
    cout<<b[-10]<<endl;     //only gives warning, gives a random value at run time
    
    
    //over size array
    
    int c[2] = {56 , 67  , 33};     //in C++ compile time error
                                    //in C only warning


    //array -> basically address of first element
    
    //array passed as pointer
    
}