#include <stdio.h>

#define MAXLINE 1000

int main(void)
{
	char line[MAXLINE];
	gets(line);
	char* tek = line;
	char* sled = line;
	int cnt = 0;
	sled++;
	do
	{
		if (*tek == 'c')
		{
			if (*sled == 'd')
			{
				cnt++;
			}
		}
		tek++;
		sled++;
	} while (*tek != '\0');
	printf("%d", cnt);
}
