#ifndef BIGINT_H
#define BIGINT_H

#include <string>
#include <iostream>
#include <stdlib.h>
using namespace std;

class bigInt
{
	public:
		bigInt(string s);
		~bigInt();
		void show();
		void operator+(bigInt& b ) ;
		int get_n();
		void set_n(int x);
	protected:

	private:

		int n;
		char* arr;

};

#endif
