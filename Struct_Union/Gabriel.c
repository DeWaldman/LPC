#include <stdio.h>
union teste{
	struct {
		char a: 1;
		char b: 1;
		char c: 1;
		char d: 1;
		char e: 1;
		char f: 1;
		char g: 1;
		char h: 1;
	};
	char caractere;
};

int main(){

	union teste foo;
	foo.caractere = 'A';

	printf(\
		"%d\n"\
		"%d\n"\
		"%d\n"\
		"%d\n"\
		"%d\n"\
		"%d\n"\
		"%d\n"\
		"%d\n"\
	, (int)foo.h, (int)foo.g, (int)foo.f, (int)foo.e, (int)foo.d, (int)foo.c, (int)foo.b, (int)foo.a);

	return 0;
}
