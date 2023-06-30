#include "tag.h"
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

void Tag::init()
{
	if (tag_database.find(this->name) != tag_database.end())
	{
		valid_attribute_names_list = tag_database.find(this->name)->second;
	}
	else
	{
		ERROR_MESSAGE("Unexpexted Tag name <" + this->name + ">", ERROR_CODE_TAG, this->line, this->column);
	}
}

bool Tag::check_name()
{
	return (tag_database.find(this->name) != tag_database.end());
}

bool Tag::check_attr_name(string name)
{
	if (tag_database.find(this->name) != tag_database.end())
	{
		auto entry = tag_database.find(this->name);

		return (find(entry->second.begin(), entry->second.end(), name) != entry->second.end());
	}
}

void Tag::AddAttribute(string name, string val)
{
	if (check_attr_name(name) || is_user_defined_attribute(name))
	{
		Attribute attribute(name, this->attribute_database, "", val, this->line, this->column);
		attribute.check_state();
	}
	else
	{
		ERROR_MESSAGE("Unexpected Attribute name <" + name + ">" + " for tag <" + this->name + ">", ERROR_CODE_ATTRIBUTE, this->line, this->column);
	}
}