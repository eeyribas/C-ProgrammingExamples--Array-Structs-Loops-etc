#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char s1[20]="Happy";
	char s2[]="Happy year";
	char s3[40]="";

	printf("s1=%s\ns2=%s\n\n", s1, s2);
	printf("strcat(s1, s2)=%s\n", strcat(s1, s2));
	printf("strncat(s3, s1,2)=%s\n", strncat(s3, s1, 2));
	printf("strcat(s3, s1)=%s\n", strcat(s3, s1));

	getch();
	return 0;
}
