/*
 * source.cpp
 *
 *  Created on: Oct 16, 2015
 *      Author: dillon
 */

#include <string>;

using namespace std;
class Book{
public:
void get_ISBN(){
	return ISBN;
}
void get_Title(){
	return Title;
}
void get_Author(){
	return Author;
}
void get_CopyWriteDate(){
	return CopyWriteDate;
}
void set_ISBN(string isbn){
	//do format checking
	ISBN = isbn;
}
void set_Title(string t){
	Title = t;
}
void set_Author(string a){
	Author = a;
}
void set_CopyWriteDate(string d){
	CopyWriteDate = d;
}
private:
	int ISBN;
	string Title;
	string Author;
	string CopyWriteDate;
	bool operator==(Book& b1 , Book& b2);
};
bool Book :: operator== (Book& b1, Book& b2){
	if(b1.get_ISBN() == b2.get_ISBN())
		return true;
	return false;
}
book Book:: operator > (Book& b1, Book& b2){
	return (b1.get_)
}
