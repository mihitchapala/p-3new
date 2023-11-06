#include<iostream>
#include<string>
struct student{
	std::string name;
	int std;
	float percentage;
};
int main(){
	student student;
	std::cout<<"enter student name ::";
	std::getline(std::cin,student.name);
	std::cout<<"enter student class/standard:";
	std::cin>>student.std;
	std::cout<<"enter student percentage:";
	std::cin>>student.percentage;
	std::cout<<"\n student details:\n";
	std::cout<<"name :"<<student.name<<"\n";
	std::cout<<"class/standard: "<<student.std<<"\n";
	std::cout<<"percentage::"<<student.percentage<<"\n";
	return 0;
}
