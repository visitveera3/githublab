#include <stdio.h>

size_t my_strlength(char *s)
{
 char *p = s;
while (*p)
++p;
return (p - s);
}

int main(void)
{
int i;
char *s[] =
{
"Git tutorials",
"zippyops"
};

for (i = 0; i < 2; ++i)
printf("string lenght of %s = %d\n", s[i], my_strlength(s[i]));
return 0;
}
