/*

important basics part 6

*/
#include <iostream>
using namespace std;


//C++ string class internally uses char array to store character but all memory management, allocation and null termination is handled by string class itself that is why it is easy to use. The length of c++ string can be changed at runtime because of dynamic allocation of memory similar to vectors. As string class is a container class, we can iterate over all its characters using an iterator similar to other containers like vector, set and maps, but generally we use a simple for loop for iterating over the characters and index them using [] operator.


int main()
{
    string s1 = "abc";
    cout<<s1<<endl;
    
    string s2("pqrs");      
    cout<<s2<<endl;
    
    /*
    
    string s2;
    s2("pqrs");
    
    this gives compile time error
    
    */
    
    string s3(s1);  //equivalent to s3 = s1;
    cout<<s3<<endl;
    
    string s4(5,'y');       //s4 = yyyyy;
    cout<<s4<<endl;
    
    /* string s4(5,"y"); gives compile time error */
    
    
    string s5(s2,1,2);      //from index 1 of s2 and total2 characters
    cout<<s5<<endl;         //s5 = "qr";
    
    s5 = "afdskfhdskfh";
    cout<<s5.length()<<endl;
    cout<<s5.size()<<endl;
    //.length() and .size() are same in strings
    
    
    char ch = s5.at(7);     //ch = character at index 7 in s5
    cout<<ch<<endl;
    
    char chf = s5.front();  //chf = s5[0];
    char chb = s5.back();   //chb = s5[s5.size() - 1];
    cout<<chf<<endl;
    cout<<chb<<endl;
    
}
