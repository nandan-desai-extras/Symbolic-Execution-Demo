scan: 
	$(CC) main.c
sym: 
	clang -emit-llvm -c -g -O0 -Xclang -disable-O0-optnone -DSYM_TEST main_sym_test.c
release:
	clang -O3 -o main.elf main.c
clean:
	rm -rf a.out main_sym_test.bc main.elf klee-last klee-out*