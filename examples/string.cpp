#include <iostream>
#include "string1.hpp"

using namespace std;

int main() {
	string_t str1("PRIVET");
	string_t str2(" MIR");
	string_t str3;


	cout<<"Сложение строк"<<endl;
	str3=str1+str2;
	cout<<str3.getCh()<<endl;
	cout<<endl;
	cout<<endl;


	cout<<"Приведение к нижнему регистру"<<endl;
	++str3;
	cout<<str3.getCh()<<endl;
	cout<<endl;
	cout<<endl;


	string_t str4;
	cout<<"конструктор копирования"<<endl;
	str4=str3;
	cout<<str4.getCh()<<endl;
	cout<<endl;
	cout<<endl;

	cout<<"Задать значение поля ch"<<endl;
	string_t str5;
	str5.setCh("test");
	cout<<str5.getCh()<<endl;



	return 0;
}
