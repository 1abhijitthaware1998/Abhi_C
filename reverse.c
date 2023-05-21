#include <stdio.h>

#define S(l, s)	printf("%s :\t%s\n", l, s)
#define D(l, d) printf("%s :\t%d\n", l, d)

void reverse(char *s){
	S("In Function", __FUNCTION__);

	int len=0, i=0;
	char *b=s, *e=s;
	
	while(*e++) len++;
	e=e-2;
	
	D("Length is", len);

	for(; i<len/2; i++){
		*b ^= *e, *e ^= *b, *b ^= *e;	
		*b++, *e--;
	}

}

int main(){
	char str[50] = "Hello Abhijit! Welcome to Git";

	S("Before Reversing",str);
	
	reverse(str);
	
	S("After reversing", str);

	return 0;
}
