CC=gcc -m64 -Ofast -flto -march=native -funroll-loops
CFLAGS=-Wall -Wextra -std=c11
ASAN=-fsanitize=address

all: clean main

main:
	$(CC) $(CFLAGS) *.c -o out
clean:
	rm -rf out rm -rf ../CPPLINT.cfg

cppcheck:
	cppcheck --suppress=missingIncludeSystem --enable=all *.c

linters:
	cp ../../materials/linters/CPPLINT.cfg ../CPPLINT.cfg
	python3 ../../materials/linters/cpplint.py --extensions=c *.c *.h
