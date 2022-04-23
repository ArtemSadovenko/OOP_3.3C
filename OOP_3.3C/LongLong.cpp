#include "LongLong.h"
#include "LongLong.h"

void LongLong::set_high(long  a) {
	high = a;
}

void LongLong::set_low(long a) {
	low = a;
}

long LongLong::get_high() {
	return high;
}

long LongLong::get_low() {
	return low;
}

LongLong::LongLong()
{
	high = 0;
	low = 0;
	Count();
}

LongLong::LongLong(long a, long b)
{
	high = a;
	low = b;
	Count();
}

LongLong::LongLong(LongLong& a)
{
	high = a.high;
	low = a.low;
	Count();
}

LongLong::~LongLong()
{
}

LongLong::operator string() const
{
	stringstream ss;
	ss << "high: " << high << endl;
	ss << "low: " << low << endl;
	return ss.str();
}

LongLong& LongLong::operator++()
{
	high++;
	return *this;
	// TODO: вставьте здесь оператор return
}

LongLong& LongLong::operator--()
{
	high--;
	return *this;
	// TODO: вставьте здесь оператор return
}

LongLong LongLong::operator++(int)
{
	LongLong t(*this);
	low++;
	return t;
}

LongLong LongLong::operator--(int)
{
	LongLong t(*this);
	low--;
	return t;
}


bool operator==(LongLong& first, LongLong& second)
{
	return first.high == second.high && first.low == second.low;
}

bool operator!=(LongLong& first, LongLong& second)
{
	return !(first == second);
}

bool operator>(LongLong& first, LongLong& second)
{
	return first.high > second.high || (first.high == second.high && first.low > second.low);
}

bool operator<(LongLong& first, LongLong& second)
{
	return !(first > second);
}

ostream& operator<<(ostream& out, LongLong& a)
{
	out << "high: " << a.high << endl;
	out << "low: " << a.low << endl;
	return out;
	// TODO: вставьте здесь оператор return
}

istream& operator>>(istream& in, LongLong& a)
{
	cout << "high: "; in >> a.high;
	cout << "low: "; in >> a.low;
	cout << endl;
	return in;
	// TODO: вставьте здесь оператор return
}


