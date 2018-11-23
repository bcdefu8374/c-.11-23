#include<iostream>

using namespace std;

class Person
{
	protected:
		char *name;
		char *sex;
	private:
		
	public:
		Person(char *n,char *s):name(n),sex(s)
		{
			cout<<"人的对象被创建！"<<endl;
		}
		virtual void Print()
		{
			cout<<"人的对象被创建！"<<endl;
		}
		~Person()
		{
			cout<<"对象被销毁！"<<endl;
		}
};

class Student:public Person
{
	private:
		char *no;
	public:
		Student(char *n1,char *n,char *s):no(n1),Person(n,s)
		{
			cout<<"学生对象被创建！"<<endl;
		}
		virtual void Print()
		{
			cout<<"学号"<<no<<"姓名"<<name<<"性别"<<sex<<endl;
		}
		~Student()
		{
			cout<<"学生对象被销毁！"<<endl;
		}
};

int main()
{
	Person p("aaa","m");
 	Student s("1111","bbb","f");
	p.Print();
	s.Print();
}
