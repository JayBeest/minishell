#include <stdio.h>
#include <readline/readline.h>

int	main(void)
{
	char *line;

	line = readline("MiniShell->");
	printf("dit is de line: %s\n", line);
	return (0);
}
