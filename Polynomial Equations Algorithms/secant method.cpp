#include<iostream>
#include<cmath>

 //for specifying format
#include<bits/stdc++.h>	

using namespace std;

  //prespecified error tolerance
#define Es 0.0001

float F(float x){
	float res;
	res=(x*x)-(2*x)-5;
	return res;
} 

int main(){
	float x0,x1,x2,x2old,f0,f1,f2;
	int itr=1;
	float Ea;
	cout<<"Enter the intial guesses (x0,x1): ";
	cin>>x0>>x1;
	cout<<"Itr No.\tx0\tx1\tf0\tf1\tx2\t f2\tEa\n";
	cout<<"----------------------------------------------------------------------------\n";
	while (1){
		f0=F(x0);
		f1=F(x1);		
		x2=x1-(f1*(x1-x0)/(f1-f0));
		f2=F(x2);
		
		//finding absolute error
		Ea=fabs((x2-x1)/x2);
		cout<<fixed<<setprecision(3);
	cout<<itr<<"\t"<<x0<<"\t"<<x1<<"\t"<<f0<<"\t"<<f1<<"\t"<<x2<<"\t"<<f2<<"\t"<<Ea<<"\n";	
		x0=x1;
		x1=x2;
		itr++;
		if(Ea<=Es)
			break;	
	}
	cout<<"Approximate root (x2) is: "<<x2;
	return 0;
} 
