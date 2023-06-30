%{
    #include <iostream>
    #include <string>
    #include "page.h"
    #include "token.h"
    #include "error.h"

    #pragma warning( disable:4996 )
    #pragma warning( disable:5033 )
	
    int  yyerror (const char * err);
    int  yylex ();
	extern FILE *yyin;
    extern int yylineno;
    extern int g_LexerColumn;
    extern Document doc;
%}

%union
{
    void *string_t;
}


%token 
OPENING_TAG_BRACKET 
CLOSING_TAG_BRACKET
SLASH 
ASSIGNMENT 
DOCTYPE
DOCTYPE_HTML_5
DOCTYPE_XHTML
DOCTYPE_STRICT_1
DOCTYPE_STRICT_2
DOCTYPE_TRANS_1
DOCTYPE_TRANS_2
DOCTYPE_FRAME_1
DOCTYPE_FRAME_2
DOCTYPE_XHTML_STRICT_1
DOCTYPE_XHTML_STRICT_2
DOCTYPE_XHTML_TRANS_1
DOCTYPE_XHTML_TRANS_2
DOCTYPE_XHTML_FRAME_1
DOCTYPE_XHTML_FRAME_2
DOCTYPE_XHTML_1_1_1
DOCTYPE_XHTML_1_1_2

%token<string_t> 
DOUBLE_QUOTE_STRING 
SINGLE_QUOTE_STRING 
TEXT 

%type<string_t> 
htmlAttributeValue 
htmlAttribute 
htmlAttributeList  

%start begin

%%

begin
    : 
    | htmlDoctype htmlDocument
    | htmlDocument
    | htmlDoctype
    ;

htmlDoctype
    : OPENING_TAG_BRACKET DOCTYPE_HTML_5 CLOSING_TAG_BRACKET
    | OPENING_TAG_BRACKET DOCTYPE DOCTYPE_STRICT_1 DOCTYPE_STRICT_2 CLOSING_TAG_BRACKET
    | OPENING_TAG_BRACKET DOCTYPE DOCTYPE_TRANS_1 DOCTYPE_TRANS_2 CLOSING_TAG_BRACKET
    | OPENING_TAG_BRACKET DOCTYPE DOCTYPE_FRAME_1 DOCTYPE_FRAME_2 CLOSING_TAG_BRACKET
    | OPENING_TAG_BRACKET DOCTYPE_XHTML DOCTYPE_XHTML_STRICT_1 DOCTYPE_XHTML_STRICT_2 CLOSING_TAG_BRACKET
    | OPENING_TAG_BRACKET DOCTYPE_XHTML DOCTYPE_XHTML_TRANS_1 DOCTYPE_XHTML_TRANS_2 CLOSING_TAG_BRACKET
    | OPENING_TAG_BRACKET DOCTYPE_XHTML DOCTYPE_XHTML_FRAME_1 DOCTYPE_XHTML_FRAME_2 CLOSING_TAG_BRACKET
    | OPENING_TAG_BRACKET DOCTYPE_XHTML DOCTYPE_XHTML_1_1_1 DOCTYPE_XHTML_1_1_2 CLOSING_TAG_BRACKET
    ; 

htmlDocument  
    : htmlElement
    | htmlDocument htmlElement
    | htmlContent
    | htmlDocument htmlContent
    ;

htmlElement
    : htmlTagOpen 
    | htmlTagClose                                
    | htmlTagSingle                      
    ;

htmlTagOpen
    : OPENING_TAG_BRACKET TEXT htmlAttributeList CLOSING_TAG_BRACKET { doc.AddOpeningTag(*((std::string*)($2)),*((std::list<Attribute>*)($3)), yylineno, g_LexerColumn); }
    | OPENING_TAG_BRACKET TEXT CLOSING_TAG_BRACKET                   { doc.AddOpeningTag(*((std::string*)($2)), yylineno, g_LexerColumn); }
    ;

htmlTagClose
    : OPENING_TAG_BRACKET SLASH TEXT CLOSING_TAG_BRACKET            { doc.AddClosingTag(*((std::string*)($3)), yylineno, g_LexerColumn); }
    | OPENING_TAG_BRACKET SLASH TEXT htmlText CLOSING_TAG_BRACKET   { doc.AddClosingTag(*((std::string*)($3)), yylineno, g_LexerColumn); } 
    ;

htmlTagSingle
    : OPENING_TAG_BRACKET TEXT htmlAttributeList SLASH CLOSING_TAG_BRACKET { doc.AddSingleTag(*((std::string*)($2)), yylineno, g_LexerColumn); } 
    | OPENING_TAG_BRACKET TEXT SLASH CLOSING_TAG_BRACKET                   { doc.AddSingleTag(*((std::string*)($2)), yylineno, g_LexerColumn); }
    ;

htmlAttributeList
    : htmlAttribute                      { ($$) = gen_new_attr_list(((Attribute*)($1))); }
    | htmlAttributeList htmlAttribute    { ($$) = append_attr_in_list(((Attribute*)($2)), ((std::list<Attribute>*)($1)));  }
    ;

htmlAttribute 
    : TEXT ASSIGNMENT htmlAttributeValue { ($$) = gen_new_attr(*((std::string*)($1)), *((std::string*)($3))); }
    | TEXT                               { ($$) = gen_new_attr(*((std::string*)($1))); }
    ;

htmlAttributeValue
    : SINGLE_QUOTE_STRING 
    | DOUBLE_QUOTE_STRING 
    | TEXT  { return yyerror("Unsupported attribute value without quotes (single or double)"); }
    | SLASH { return yyerror("Unsupported attribute value without quotes (single or double)"); }
    ;

htmlContent
    : ASSIGNMENT
    | SLASH
    | TEXT
    | SINGLE_QUOTE_STRING
    | DOUBLE_QUOTE_STRING
    ;

htmlText
    : TEXT
    | htmlText TEXT
    ;
%%