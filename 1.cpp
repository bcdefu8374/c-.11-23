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
			cout<<"�˵Ķ��󱻴�����"<<endl;
		}
		virtual void Print()
		{
			cout<<"�˵Ķ��󱻴�����"<<endl;
		}
		~Person()
		{
			cout<<"�������٣�"<<endl;
		}
};

class Student:public Person
{
	private:
		char *no;
	public:
		Student(char *n1,char *n,char *s):no(n1),Person(n,s)
		{
			cout<<"ѧ�����󱻴�����"<<endl;
		}
		virtual void Print()
		{
			cout<<"ѧ��"<<no<<"����"<<name<<"�Ա�"<<sex<<endl;
		}
		~Student()
		{
			cout<<"ѧ���������٣�"<<endl;
		}
};

int main()
{
	Person p("aaa","m");
 	Student s("1111","bbb","f");
	p.Print();
	s.Print();
}
