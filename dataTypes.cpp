/*
Int ("%d"): 32 Bit integer
Long ("%ld"): 64 bit integer
Char ("%c"): Character type
Float ("%f"): 32 bit real value
Double ("%lf"): 64 bit real value

For example, to read a character followed by a double:

char ch;
double d;
scanf("%c %lf", &ch, &d);

For example, to print a character followed by a double:

char ch = 'd';
double d = 234.432;
printf("%c %lf", ch, d);
Note: You can also use cin and cout instead of scanf and printf; however, if you are taking a million numbers as input and printing a million lines, it is faster to use scanf and printf.

*/


#include <iostream>
#include <cstdio>
usign namespace std;

int main(){
	int i=0;
	long l = 0;
	char c = ' ';
	float f = 0.0;
	double d = 0.0;
	scanf("%d %ld %c %f %lf",&i,&l,&c,&f,&d);
	printf("%d\n%ld\n%c\n%f\n%lf\n",i,l,c,f,d);
	return 0;
}

