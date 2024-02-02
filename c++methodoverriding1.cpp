#include<iostream>
using namespace std;

class cricket{
	public :
	
};
class t20match : public cricket{
	public :
		void getover()
		{
			cout<<"total over is 20 \n ";
			
		}
};
class testmatch : public cricket{
	public :
		void getover()
		{
			cout<<"total over is not known ";
			
		}
};
main()
{
    t20match t20match1;
    testmatch testmatch1;
    t20match1.getover();
    testmatch1.getover();
    
    
}
