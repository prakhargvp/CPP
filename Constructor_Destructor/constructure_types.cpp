//header files
#include<iostream>
using namespace std;
class sample
{
    int x;
public:
    //default constructor
    sample(){
        x = 0;
    }
    //parameterized constructor
    sample (int a){
        x = a;
    }
    //copy constructor
    sample (sample &obj){
        x=obj.x;
    }
    void display(){
        cout<<"the value of x : "<<x<<endl;
    }
};
//calling of the main function
int main()
 {
  sample A;     // Default Constructor
  sample B(10); // Parameterized Constructor
  sample C;     // Default Constructor
  C = B;        // Copy Constructor
  
  // Output
  A.display();
  B.display();
  C.display();
return 0;
}
