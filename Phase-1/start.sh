flex -w lex_file.l
bison -y -d bison_file.y -Wnone
gcc lex.yy.c y.tab.c -Wall -w
./a.out < $1
