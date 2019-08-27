#include <stdio.h>
#include <string.h>

char* mycpy(char* dst, const char* src)
{
	int idx = 0;
	while(src[idx] != '\0'){
		dst[dix] = src[idx];
		idx++;
	}
	dst[idx] = '\0';
	
	return dst; 
} 
 
int main(int argc, char const *argv[])
{
	char s1[] = "abc";
	char s2[] = "abc";
	strcpy(s1,s2);
	
	return 0;
}
