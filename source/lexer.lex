%option yylineno
%option nounistd
%option noyywrap
    
%{
    #include <stdio.h>
    #include <io.h>
    #include <string>
    #include "token.h"
    #include "error.h"
    #include "grammar.cpp.h"
    #pragma warning( disable:4996 )
    #pragma warning( disable:5033 )

    extern int yyerror(const char * err);
    int g_LexerColumn = 0;
%}

%x comment
%x script
%x style
%x xml
%x script_paired
%x style_paired
%x xml_paired

%%
<comment>
{
    "-->"	    { BEGIN(INITIAL); }
    \n			{ }
    <<EOF>>		{ ERROR_MESSAGE("Unclosed comment", ERROR_CODE_DOCUMENT, yylineno, g_LexerColumn); return (EOF); }
    .			{ }
}

<script>
{
    "/>"        { BEGIN(INITIAL); }
    ">"	        { BEGIN(script_paired); }
    \n			{ }
    <<EOF>>		{ ERROR_MESSAGE("Unclosed <script> tag", ERROR_CODE_DOCUMENT, yylineno, g_LexerColumn); return (EOF); }
    .			{ }
}

<style>
{
    "/>"        { BEGIN(INITIAL); }
    ">"	        { BEGIN(style_paired); }
    \n			{ }
    <<EOF>>		{ ERROR_MESSAGE("Unclosed <style> tag", ERROR_CODE_DOCUMENT, yylineno, g_LexerColumn); return (EOF); }
    .			{ }
}

<xml>
{
    "/>"        { BEGIN(INITIAL); }
    ">"	        { BEGIN(xml_paired); }
    \n			{ }
    <<EOF>>		{ ERROR_MESSAGE("Unclosed <xml> tag", ERROR_CODE_DOCUMENT, yylineno, g_LexerColumn); return (EOF); }
    .			{ }
}

<script_paired>
{
    "</script>"	{ BEGIN(INITIAL); }
    \n			{ }
    <<EOF>>		{ ERROR_MESSAGE("Unclosed <script> tag", ERROR_CODE_DOCUMENT, yylineno, g_LexerColumn); return (EOF); }
    .			{ }
}

<style_paired>
{
    "</style>"	{ BEGIN(INITIAL); }
    \n			{ }
    <<EOF>>		{ ERROR_MESSAGE("Unclosed <style> tag", ERROR_CODE_DOCUMENT, yylineno, g_LexerColumn); return (EOF); }
    .			{ }
}

<xml_paired>
{
    "</xml>"	{ BEGIN(INITIAL); }
    \n			{ }
    <<EOF>>		{ ERROR_MESSAGE("Unclosed <xml> tag", ERROR_CODE_DOCUMENT, yylineno, g_LexerColumn); return (EOF); }
    .			{ }
}

[ \t\r\f\v\a]+                                                {  g_LexerColumn += yyleng; }
"\n"                                                          {  g_LexerColumn = 0; }
"\!DOCTYPE html PUBLIC"                                       {  return Token(yytext, DOCTYPE_XHTML);             }
"\!DOCTYPE HTML PUBLIC"                                       {  return Token(yytext, DOCTYPE);                   }
"\!DOCTYPE html"                                              {  return Token(yytext, DOCTYPE_HTML_5);            }
"\!doctype html PUBLIC"                                       {  return Token(yytext, DOCTYPE_XHTML);             }
"\!doctype HTML PUBLIC"                                       {  return Token(yytext, DOCTYPE);                   }
"\!doctype html"                                              {  return Token(yytext, DOCTYPE_HTML_5);            }
"\"-//W3C//DTD HTML 4.01//EN"\"                               {  return Token(yytext, DOCTYPE_STRICT_1);          }
"\"http://www.w3.org/TR/html4/strict.dtd"\"                   {  return Token(yytext, DOCTYPE_STRICT_2);          }
"\"-//W3C//DTD HTML 4.01 Transitional//EN"\"                  {  return Token(yytext, DOCTYPE_TRANS_1);           }
"\"http://www.w3.org/TR/html4/loose.dtd"\"                    {  return Token(yytext, DOCTYPE_TRANS_2);           }
"\"-//W3C//DTD HTML 4.01 Frameset//EN"\"                      {  return Token(yytext, DOCTYPE_FRAME_1);           }
"\"http://www.w3.org/TR/html4/frameset.dtd"\"                 {  return Token(yytext, DOCTYPE_FRAME_2);           }
"\"-//W3C//DTD XHTML 1.0 Strict//EN"\"                        {  return Token(yytext, DOCTYPE_XHTML_STRICT_1);    }
"\"http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd"\"       {  return Token(yytext, DOCTYPE_XHTML_STRICT_2);    }
"\"-//W3C//DTD XHTML 1.0 Transitional//EN"\"                  {  return Token(yytext, DOCTYPE_XHTML_TRANS_1);     }
"\"http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd"\" {  return Token(yytext, DOCTYPE_XHTML_TRANS_2);     }
"\"-//W3C//DTD XHTML 1.0 Frameset//EN"\"                      {  return Token(yytext, DOCTYPE_XHTML_FRAME_1);     }
"\"http://www.w3.org/TR/xhtml1/DTD/xhtml1-frameset.dtd"\"     {  return Token(yytext, DOCTYPE_XHTML_FRAME_2);     }
"\"-//W3C//DTD XHTML 1.1//EN"\"                               {  return Token(yytext, DOCTYPE_XHTML_1_1_1);       }
"\"http://www.w3.org/TR/xhtml11/DTD/xhtml11.dtd"\"            {  return Token(yytext, DOCTYPE_XHTML_1_1_2);       }
"<script"                                                     {  Token(yytext, SCRIPT_STARTED);   BEGIN(script);  }
"<style"                                                      {  Token(yytext, STYLE_STARTED);    BEGIN(style);   }
"<xml"                                                        {  Token(yytext, XML_STARTED);      BEGIN(xml);     }
"<!--["                                                       {  Token(yytext, COMMENT_STARTED);  BEGIN(comment); }
"<!--"                                                        {  Token(yytext, COMMENT_STARTED);  BEGIN(comment); }
"<"                                                           {  return Token(yytext, OPENING_TAG_BRACKET);       }
">"                                                           {  return Token(yytext, CLOSING_TAG_BRACKET);       }
"="                                                           {  return Token(yytext, ASSIGNMENT);                }
"/"                                                           {  return Token(yytext, SLASH);                     }
\'(?:[^\\']+|\\.)*\'                                          {  return Token(yytext, SINGLE_QUOTE_STRING);       }
\"(?:[^\\"]+|\\.)*\"                                          {  return Token(yytext, DOUBLE_QUOTE_STRING);       }
[^<>/= \n]*                                                   {  return Token(yytext, TEXT);                      }
%%