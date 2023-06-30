#pragma once

#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <regex>
#include <list>

using namespace std;

typedef map<string, string> db_attr_type;
typedef map<string, vector<string>> db_tag_type;

class Attribute
{
private:
	string name;
	string value;
	size_t line;
	size_t column;

	vector<string> names_database;
	map<string, string> values_database;

	bool check_value();

public:

	Attribute(string _name, const map<string, string> & val_db, string err, string val, int _line, int _column)
		: name(_name), values_database(val_db), value(val), line(_line), column(_column)
	{}

	void check_state();

	const string get_name() const { return (name); }
	const string get_value() const { return (value); }
	void set_name(string _name) { name = _name; }
	void set_value(string _value) { value = _value; }
};