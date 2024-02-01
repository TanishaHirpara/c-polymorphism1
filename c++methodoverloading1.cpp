#include<iostream>
using namespace std;

class calculate{
	int a,b,x,y,c;
	
};
class points{
	public : 
	void setdata(int a, int b)
	{
		cout<<"division is = "<<a/b<<endl;
	}
	void setdata(int a, int b, int x)
	{
		cout<<"addition is = "<<a + b + x<<endl;
	}
	void setdata(int a, int b, int x, int y )
	{
		cout<<"multiplicationn is = "<<a * b * x * y<<endl;
	}
	void setdata(int a, int b, int x, int y, int c)
	{
		cout<<"subtraction is = "<<a - b - x - y - c<<endl;
	}
		
};
main()
{
   points p1;
   p1.setdata(8,4);
   p1.setdata(4,7,8);
   p1.setdata(4,5,7,8);
   p1.setdata(97,4,5,7,8);
   
   
}

