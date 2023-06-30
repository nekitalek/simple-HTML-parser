#include "token.h"
#include "error.h"
#include "grammar.cpp.h"
#include <string>

using namespace std;

list<string> strings;
list<list<Attribute>> attributes_lists;
list<Attribute>  attributes;

extern int yylineno;
extern int yyleng;
extern int g_LexerColumn;

void clean_structures()
{
	strings.clear();
	attributes_lists.clear();
	attributes.clear();
}

int Token(void * text, int value)
{
	switch (value)
	{
	    case (SINGLE_QUOTE_STRING)  : { yylval.string_t = gen_new_strw((char*)text); break; }
	    case (DOUBLE_QUOTE_STRING)  : { yylval.string_t = gen_new_strw((char*)text); break; }
	    case (TEXT)                 : { yylval.string_t = gen_new_str((char*)text);  break; }
	}
	g_LexerColumn += yyleng;
	return (value);
}

void * gen_new_str(char * str) // returns pointer to std::string
{
	string _str = str;
	strings.push_back(_str);
	return (&(*(--strings.end())));
}

void * gen_new_strw(char * str) // returns pointer to std::string 
{
	string _str = str;
	_str.erase(_str.begin());
	_str.erase(--_str.end());
	strings.push_back(_str);
	return (&(*(--strings.end())));
}

void * gen_new_attr(string attr, string val) // returns pointer to htmlAttribute 
{
	Attribute instance(attr, ATTR_DATABASE, "", val, yylineno, g_LexerColumn);
	attributes.push_back(instance);

	return (&(*(--attributes.end())));
}

void * gen_new_attr(string attr) // returns pointer to htmlAttribute 
{
	Attribute instance(attr, ATTR_DATABASE, "", "", yylineno, g_LexerColumn);
	attributes.push_back(instance);
	return (&(*(--attributes.end())));
}

void * gen_new_attr_list(Attribute * attr) // returns pointer to std::vector<htmlAttribute>
{
	list<Attribute> instance;
	instance.push_back(*attr);
	attributes_lists.push_back(instance);
	return (&(*(--attributes_lists.end())));
}

void * append_attr_in_list(Attribute * attr, list<Attribute> * lst) // returns pointer to std::vector<htmlAttribute>
{
	lst->push_back(*attr);
	return (lst);
}