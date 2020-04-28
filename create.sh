#!/bin/sh

echo "#include <stdio.h>

int main(void)
{
	printf(\"\");
	scanf(\"\", &);

	printf("",);

	return 0;
}
" >> "$1".c && vim "$1".c
