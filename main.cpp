#include<bits/stdc++.h>
using namespace std;

template<class nameType,class ageType>
class Person
{
public:
	Person(nameType name,ageType age)
	{
		this->m_name = name;
		this->m_age = age;
	}	
	
	void print()
	{
		cout<<"name:"<<this->m_name<<" age:"<<this->m_age<<endl;
	}
	nameType m_name;
	ageType m_age;
};

template<typename T1>
void print1(T1 &p1)
{
	p1.print();
	cout<<typeid(T1).name();
}



int main()
{
	Person<string,int> p1("уехЩ",23);
	print1(p1);
	return 0;
}
