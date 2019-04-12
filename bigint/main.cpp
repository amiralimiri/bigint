#include <iostream>
#include <string>
#include "bigInt.h"
using namespace std;

int main()
{
	bigInt a("123456709");
	bigInt b("1");
	bigInt c=a+b;
	//b.insert('2');
	//b.show();
	c.show();
	//a.show();
	//c.show();

}
