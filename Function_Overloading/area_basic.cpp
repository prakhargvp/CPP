#include<iostream>
using namespace std;
class Polygons
{
public :
float area(int r)
{
  cout<<3.14*r*r<<endl;
}
float area(int l,int b)
{
  cout<<l*b;
}
};
int main()
{
Polygons A,B;
A.area(5);
B.area(3,4);
return 0;
}
