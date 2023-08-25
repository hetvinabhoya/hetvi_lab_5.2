#include<iostream>
using namespace std;

class Info{
	private:
		int a;
		int b;
		
	public:
		void setData1()
		{
			cout << "Enter the value of a : ";
			cin >> this->a;
		}
		
		void setData2()
		{
			cout << "Enter the value of b : ";
			cin >> this->b;
		}
		
		Info operator<(Info h)
		{
			if(this->a < h.b )
	        {
		        cout << "a is less than b...";
	        }
	        else
	        {
		        cout << "b is less than a...";
	        }
		}
			
};

int main()
{
	Info i1,i2;
	
	i1.setData1();
	i2.setData2();
	
	i1 < i2;

	
	return 0;
}
