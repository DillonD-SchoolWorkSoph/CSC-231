/*
 * source.cpp
 *
 *  Created on: Nov 1, 2015
 *      Author: dillon
 */
#include <iostream>
class B1{
public:
	virtual void vf();
	void f();
};
void B1::f(){
	std::cout<<"name";
}
void B1::vf(){
	std::cout << "name";
}
class D1 : B1{
	void vf();
	void f();
};
void D1::vf(){
	std::cout <<" D1";
}
void D1::f(){
	std::cout << " D1";
}
int main(){
	B1 bob;
	bob.f();
	bob.vf();
	D1 bob2;
	bob2.f();
	bob2.vf();
	B1& ref_Bob;
	ref_Bob = bob2;
	ref_Bob.f();
	ref_bob.vf();
}
