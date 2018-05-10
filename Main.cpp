#include <iostream>
#include "multiple.h"
#include "subtract.h"
#include "modulas.h"
#include "sum.h"
using namespace std;

int main()
{
	int option,T,op1,op2,N,cnt=0,abs=0;
	cout<<"How Many operation Do you Want: "<<endl;
	cin>>T;
	while(T--)
	{
		cout << "What do you want to do?\n";
		cout << "1. Add\n";
		cout << "2. Subtract\n";
		cout << "3. Multiply\n";
		cout << "4. Modulas\n";
      cin>>N;
     cout<<"Enter Your Number which you want to Operate: "<<endl;
     cin>>op1>>op2;

	if(N==1)
	{
        cout<<"The sum is: "<<sum(op1,op2)<<endl;
	}
	else if(N==2)
	{
	 	cout<<"The Subtraction is: "<<subtract(op1,op2)<<endl;	
	}
	else if(N==3)
	{
	 	cout<<"The multiply is: "<<multiple(op1,op2)<<endl;	
	}
	else if(N==4)
	{
	 	cout<<"The Modulas is: "<<modulas(op1,op2)<<endl;	
	}

	return 0;
}
