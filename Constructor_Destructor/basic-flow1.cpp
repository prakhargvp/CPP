//Header Files 
#include<iostream>
using namespace std;
// Sample Class
class sample
{
    int a;
    //These static variables are stored on static storage area , not in stack.
    static int i;
// Access Modifier :  Public
public:
    // Constructor Calling 
    sample(){
        a = ++i;
        cout<<"calling the construtor :"<<a<<endl;
    }
    // Destructor Calling
   ~sample(){
        cout<<"calling of destructor :"<<a<<endl;
   }
};
// Static member variables (data members) are not initialied using constructor, 
// because these are not dependent on object initialization.
// Also, it must be initialized explicitly, always outside the class. If not initialized, Linker will give error.
int sample::i;
// Main Calling Function
int main()
{
    sample obj;
    {
        sample obj1;
        {
            sample obj2;
        }
    }
return 0;
}
