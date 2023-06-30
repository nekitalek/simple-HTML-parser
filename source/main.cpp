#include "grammar.cpp.h"
#include "lexer.h"
#include "page.h"
#include "html_attr_and_tag.h"

#pragma warning( disable:4996 ) // disable unsafe fopen error
#pragma warning( disable:5033 ) // disabe register warning from bison.simple

using namespace std;

extern FILE* yyin;
extern int yyparse();
int yylex();

extern int yylineno;
extern int g_LexerColumn;

bool error = false;

int yyerror(const char * err)
{
	string error_message(err);

	cout << endl << "Parser stopped with fatal syntax error." << endl;
	cout << "line: " << yylineno << "; " << "column: " << g_LexerColumn << endl;
	cout << "reason: " << err << endl;

	error = true;
	
	return -1;
}

Document doc(ATTR_DATABASE, TAG_DB);

int main(int argc, char * argv[])
{
	setlocale(LC_ALL, "Russian");
	if (argc < 2)
	{
		cout << "Invalid arguments. Usage: " << argv[0] << " <filename>" << endl;
		return -1;
	}

	yyin = fopen(argv[1], "r");
	if (!yyin) 
	{ 
		cout << "Error opening file!" << endl;
		return -1;
	}
	yyparse();

	if (error == false)
		cout << "OK" << endl;
	
	system("pause");
	return 0;
}