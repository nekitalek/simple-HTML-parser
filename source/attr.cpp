#include "attr.h"
#include "error.h"

using namespace std;

static bool is_user_defined_attribute(string name)
{
	if (name.length() < 6)   
	{ 
		return false; 
	}
	string templ = name.substr(0, 5);
	if (templ == "data-")    
	{ 
		return true; 
	}
	else                    
	{
		return false; 
	}
}

bool Attribute::check_value()
{
	auto result = values_database.find(this->name);
	if (result != values_database.end())
	{
		regex name_template(result->second);
		smatch match;

		return regex_match(this->value, match, name_template);
	}
	else 
	{ 
		return false; 
	}
}

void Attribute::check_state()
{
	if (!this->check_value() && !is_user_defined_attribute(this->name)) 
	{
		ERROR_MESSAGE("Unexpected Attribute value <" + this->value + "> for attribute <" + this->name + ">", ERROR_CODE_ATTRIBUTE, this->line, this->column);
	}
}