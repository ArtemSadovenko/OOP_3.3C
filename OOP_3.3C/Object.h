#pragma once
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Object
{
private:
	static int count;
public:
	static void Count() { count++; }
	static int get_count() { return count; }

};

