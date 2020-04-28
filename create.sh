#!/bin/sh

# Create a C file using the standard pattern
# for "C Programming: A Modern Approach"
# chapters 1 - 7
echo "#include <stdio.h>

int main(void)
{
	printf(\"\");
	scanf(\"\", &);

	printf("",);

	return 0;
}
" >> "$1".c && vim "$1".c
