#include <iostream>
#include<string>
using namespace std;

class Human
{
protected:
	string name, surname, midname;
	int age;
	
public:
	Human()
	{
		name = "none";
		surname = "none";
		midname = "none";
		age = 0;
	}
	
	Human(string n, string s, string m, int a)
	{
		name = n;
		surname = s;
		midname = m;
		age = a;
	}
	
	virtual void Print() = 0;
	

};


class Student : public Human
{
protected:
	bool on_lesson;
	
public:
	
	Student()
	: Human()
	{
		on_lesson = false;
	}
	
	Student(string ns, string ss, string sm, int sa, bool so)
	: Human(ns, ss, sm, sa)
	{
		on_lesson = so;
	}
	
	/*void SetOnLesson(boot l)
	{
		on_lesson = l;
	}*/
	
	void Print() override
	{
		cout << "Name = " << name << endl;
		cout << "Surname = " << surname << endl;
		cout << "Midname = " << midname << endl;
		cout << "Age = " << age << " years" << endl;
		if (on_lesson)
		{
			cout << "On lesson" << endl;
		}
		else
		{
			cout << "Not on lesson" << endl;
		}
	}
};

class Boss : public Human
{
protected:
	int number_of_workers;
	
public:

	Boss()
	: Human()
	{
		number_of_workers = 0;
	}
	
	Boss(string bn, string bs, string bm, int ba, int bw)
	: Human(bn, bs, bm, ba)
	{
		number_of_workers = bw;
	}
	
	void Print() override
	{
		cout << "Name = " << name << endl;
		cout << "Surname = " << surname << endl;
		cout << "Midname = " << midname << endl;
		cout << "Age = " << age << " years" << endl;
		cout << "Count of workers = " << number_of_workers << endl;
	}
};

int main()
{
	Boss a;
	Student b;
	
	a.Print();
	
	cout << endl;
	
	b.Print();
	
	return 0;
}
