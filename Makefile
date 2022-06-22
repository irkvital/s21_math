CC=gcc
CFLAGS=-Wall -Wextra -std=c11
ASAN=-fsanitize=address

all: clean main

main:
	$(CC) $(CFLAGS) $(ASAN) *.c -o out
clean:
	rm -rf out rm -rf ../CPPLINT.cfg

cppcheck:
	cppcheck --suppress=missingIncludeSystem --enable=all s21_grep.c

linters:
	cp ../../materials/linters/CPPLINT.cfg ../CPPLINT.cfg
	python3 ../../materials/linters/cpplint.py --extensions=c *.c *.h
