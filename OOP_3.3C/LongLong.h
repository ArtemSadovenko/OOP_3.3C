#pragma once
#include "Object.h"

class LongLong: public Object
{
private:
	long int high;
	long int low;
public:
	void set_high(long a);
	void set_low(long  a);

	long get_high();
	long get_low();

	friend bool operator == (LongLong& first, LongLong& second);
	friend bool operator != (LongLong& first, LongLong& second);
	friend bool operator > (LongLong& first, LongLong& second);
	friend bool operator < (LongLong& first, LongLong& second);

	LongLong();
	LongLong(long a, long b);
	LongLong(LongLong& a);
	~LongLong();

	friend ostream& operator << (ostream& out, LongLong& a);
	friend istream& operator >> (istream& in, LongLong& a);

	operator string() const;

	LongLong& operator ++();
	LongLong& operator --();
	LongLong operator ++(int);
	LongLong operator --(int);
};

