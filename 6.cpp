#include<iostream>
class shape{
	public:
		double hight;
		double base;
		void disply_shape();
};
void shape::display_shape()
{
	std::cout<<"height:"<<hight<<std::endl;
	std::cout<<"base:"<<base<<std::endl;
}
int main()
{
	shape myshape;
	myshape.height=5.0;
	myshape.base=10.0;
	
	myshape.display_shape();
	return 0;
}
