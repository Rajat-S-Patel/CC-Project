flex lex_file.l
bison -d bison_file.y
gcc y.tab.c lex.yy.c 
./a.out < $1
