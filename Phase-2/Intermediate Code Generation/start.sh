bison -d --warning=none bison_file.y
flex lex_file.l
gcc -w y.tab.c lex.yy.c
./a.out < $1
