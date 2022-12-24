#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

void Check(char *a, char *b, int (*cmp)(const char *, const char *));
int CompValues(const char *a, const char *b);

int main(void)
{
    char s1[80], s2[80];
    printf ("Enter two values or two strings.\n");
    gets (s1);
    gets(s2);

    if(isdigit(*s1))
    {
        printf("Testing values for equality.\n");
        Check(s1, s2, CompValues);
    }
    else
    {
        printf("Testing strings for equality.\n");
        Check(s1, s2, strcmp);
    }

    return 0;
}

void Check(char *a, char *b,  int (*cmp)(const char *, const char *))
{
    if(!(*cmp)(a, b))
        printf("Equal");
    else
        printf("Not Equal");
}

int CompValues(const char *a, const char *b)
{
    if(atoi(a)==atoi(b))
        return 0;
    else
        return 1;
}
