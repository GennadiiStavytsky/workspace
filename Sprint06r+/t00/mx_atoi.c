#include <stdbool.h>
#include <stdio.h>
bool mx_isdigit(int c);
bool mx_isspace(char s);

int mx_atoi(const char* str) 
{ 
	if (*str == '\0') 
		{return 0;}

	int sum = 0; 
	int sign = 1; 
	int i = 0; 
	

		while(mx_isspace(str[i])) {i++;}

		if (str[i] == '-') { 
			sign = -1; 
			i++;		
		} 

		else if (str[i] == '+') { 
			i++;
		} 
	
	while (str[i] && !mx_isspace(str[i]) && mx_isdigit(str[i])){ 
	
		sum = sum * 10 + str[i] - '0'; 
		i++;
	} 
	return sign * sum; 
} 

