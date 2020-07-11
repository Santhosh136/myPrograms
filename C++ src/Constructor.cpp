#include<iostream>
using namespace std;
class Constructor
{
	int a,b;
	public:
		Constructor()
		{
			a=10;b=20;	
		}
		void display()
		{
			cout<<a<<" "<<b;	
		}
};

int main()
{
	Constructor c;
	c.display();
}
