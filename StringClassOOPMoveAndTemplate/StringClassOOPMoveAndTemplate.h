#pragma once
#include<iostream>
using namespace std;

class String;
String operator+(const String& left, const String& right);


		//Class declaration
class String
{
	int size;   // Размер
	char* str; // Выделяет память
public:
	int get_size() const;
	const char* get_str()const;
	char* get_str();
	//Constroctor
	String(int size = 80);
	String(const char str[]);
	String(const String& other);
	String(String&& other);
	~String();

	//Operator
	String& operator+=(const String& other);

	const char& operator[](int i) const;

	char& operator[](int i);

	String& operator=(const String& other);

	String& operator=(String&& other);
	//Methods
	void print();
};
