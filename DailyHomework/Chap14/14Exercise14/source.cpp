/*
 * source.cpp
 *
 *  Created on: Nov 3, 2015
 *      Author: dillon
 */
#include <iostream>

class Controller{
public:
private:
	bool on;
protected:
	virtual void on() {on = true;}
	virtual void off() {on = false;}
	virtual void set_level(int i);
	virtual void show() ;
};
class Supper_Controller : Controller{

public:
	virtual void show(){std::cout<<on;}
};
class Supper_Supper_Controller: Controller{

};
