#include <iostream>
#include <string>
class student{
	private:
		std::string name;
		int age;
	public:
		void get_details(){
			std::cout<<"enter student name :";
			std::cin>>name;
			std::cout<<"enter student age :";
			std::cin>>age;
			
		}
		void display_details(){
			std::cout<<"student name:"<<name<<std::endl;
			std::cout<<"student age:"<<age<<std::endl;
		}
};
int main()
{
	student student;
	student.get_details();
	student.display_details();
	return 0;
}
