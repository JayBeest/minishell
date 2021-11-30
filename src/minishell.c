#include <readline/readline.h>

int	main(void)
{
	char *line;
	char *prompt;

	line = readline(prompt);

	printf("dit is de line: %s\n", line);
	return (0);
}