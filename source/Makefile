all:
	win_flex --outfile=lexer.cpp lexer.lex
	bison -y -d -o  grammar.cpp grammar.yacc
	g++ main.cpp grammar.cpp lexer.cpp page.cpp attr.cpp tag.cpp token.cpp -o parser

clear: 
	rm parser.exe