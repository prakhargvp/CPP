#include<iostream>
using namespace std;
class sample
{
    int a;
static int i;
public:
sample()
{
 a = ++i;
 cout<<"calling the construtor :"<<a<<endl;
}
   ~ sample()
   {
    cout<<"calling of destructor :"<<a<<endl;
   }
};
int sample::i;
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

