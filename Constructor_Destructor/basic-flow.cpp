// Basic Constructor & Destructor Calling
// Header Files
#include<iostream>
using namespace std;
// Global Variable
int i;
// Class
class sample{
    int a;
    public:
        sample()
        {
            a = ++i;
            cout<<"calling of constructor : "<<a<<endl;
        }
        ~sample()
        {
            cout<<"calling of destructure : "<<a<<endl;
        }
};
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
