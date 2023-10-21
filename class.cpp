//class (data member and its method) 
//and object---> through which program will run

// data member--->through which we have to work eg int a,b,c,d(data member)
// method---> define(what to do) maths,game,sys etc

#include<iostream>
using namespace std;   //  :: scope resolution
class stu{
	public:
		
	int a; // data member
	void display() // method or function
	{
 	cout<<"enter the value of a :"; // cout -->printf
	cin>>a;	                      // cin----> scanf
	}		
};
int main()
{
	// classname object
	stu s1;
    //object. method for calling 
	s1.display();
}
