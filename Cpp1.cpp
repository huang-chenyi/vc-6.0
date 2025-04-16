#define _CRT_SECURE_NO_WARNINGS    //确保scanf()的正常运行
#include <stdio.h>

void newcopy(char *new, char *old);

int main()
{
	char old_ch[13] = "I love China";
	char new_ch[11] = "\0";
	char *old = old_ch;
	char *new = new_ch;
	newcopy(new, old);
	printf("%s", new);
	return 0;
}

void newcopy(char *new, char *old)
{
	for (int i = 0; i < 12; i++, old++)
	{
		if (*old < 'a' || *old > 'z')
		{
			*new = *old;
			new++;
		}
	}
	*new = '\0';
}