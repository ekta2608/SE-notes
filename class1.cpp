#include<iostream>
using namespace std;
// access modifier --> 3 type
// private (default) ,public ,protected 
class emp{
public:
		int a,b,mul; // data member
		
		setdata() // method
		{
			cout<<"Enter two numbers:"<<endl; // endl --> line break 
			cin>>a>>b;
			mul=a*b;
			cout<<"Total value is :"<<mul;		
		}	
};

int main()
{
	emp e1;
	e1.setdata();
}
