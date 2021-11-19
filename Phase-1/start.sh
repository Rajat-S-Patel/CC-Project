lex -w tokens.l
yacc -y -d parse.y -Wnone
gcc lex.yy.c y.tab.c -Wall -w
./a.out < $1
