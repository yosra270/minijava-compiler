scan:
	flex scanner.l

parse:
	bison -d parser.y

generate_compile: scan parse
	gcc -o minijava_compiler parser.tab.c lex.yy.c  symtab.c code_generation.c stack_machine.c

compile: generate_compile
	./minijava_compiler < $(file) 2> out.txt 1> code.o
	
