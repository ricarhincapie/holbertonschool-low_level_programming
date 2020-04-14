#include "hsh.h"

int (*find_builtins(char *user_input))()
{
	int counter = 0, stru_size = 0;

	builtin_struct my_builtins[] = { 
		{"exit", exit_func},
		{"env", env_func},
	};

	stru_size = (sizeof(my_builtins) / sizeof(builtin_struct));
	if(user_input != NULL)
	{
		while (counter < stru_size)
		{
			if(strcmp(my_builtins[counter].b_name, user_input) == 0)
				return(my_builtins[counter].b_func);
			counter++;	
		}
	}
	return(NULL);
}	