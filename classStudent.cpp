#include<iostream>
#include<exception>
using namespace std;
class StudentException{ 
	int age;
	public:
		const char* what(){
			cout<<"You're under age 18 please enter valid age "<<endl;
		}
		void getage(){
			cout<<"Your age is "<<age<<endl;
		}
		void setage(int age){
			this->age=age;
			
		}
};
class Student{
	int rollno;
	string name;
	int age;
	public:
		void acceptInfo(){
			cout<<"Enter details: "<<endl;
			cout<<"Enter roll number: ";
			cin>>rollno;
			cout<<"Enter name: ";
			cin>>name;
			cout<<"Enter age: ";
			cin>>age;
			if(age<18){
				StudentException studex;
				studex.setage(age);
				throw studex;
			}
			
		}
		void display(){
			cout<<"Student details: ";
			cout<<" Roll number: "<<rollno<<"     Name: "<<name<<"    Age: "<<age<<endl;
		}
};
int main12345678(){
	Student s1;
	try{
		s1.acceptInfo();
		s1.display();
	}catch(StudentException studex){
		studex.what();
		studex.getage();
	}
	
}
