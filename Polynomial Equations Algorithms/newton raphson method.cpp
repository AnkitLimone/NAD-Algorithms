#include<iostream>
#include<math.h>
using namespace std;
float fun(float x)//we are finding the root of x^4-x-10
{
   return x*x*x*x-x-10;
}
float diff(float x) //differential of x^4-x-10;
{
return 4*x*x*x-1;
}
int main()
{
  int itr,maxitr;
  float h,x0,x1,aerr;
  cout<<"Enter x0,allowed error,maximum iterations"<<endl;
  cin>>x0>>aerr>>maxitr;
  for(itr=1;itr<=maxitr;itr++)
{
  h=fun(x0)/diff(x0);
  x1=x0-h;
  if(fabs(h)<aerr)
    {
      cout<<"after "<<itr<<" root = "<<x1<<endl;
      return 0;
    }
  x0=x1;
}
  cout<<"Iterations not sufficient, Solution does not converge"<<endl;
return 1;
}
