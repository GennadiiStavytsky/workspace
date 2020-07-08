#include <stdio.h>
#include <unistd.h>
int mx_strlen(const char *s)
{
	int a = 0;
	while (s[a]) 
{
	++a;
}
	return a;
}
