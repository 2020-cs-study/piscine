#include <stdlib.h>
#include "test.h"

char	**mk_arr(void)
{
	int height = 3;
	int width = 10;
	char **arr;
	int i;

	i = 0;
	arr = (char**)malloc(sizeof(char*) * height);
	while (i < height)
	{
		arr[i] = (char *)malloc(sizeof(char) * (width + 1));
		i++;
	}
	*arr = "4";
	arr++;
	*arr = "10";
	arr++;
	*arr = "3";
	arr++;
	return (**arr);
}

t_dict	*dict_to_struct(t_dict *box)
{
	*box = (t_dict *)malloc(sizeof(t_dict));
	box[0].key[0] = '3';
	box[0].value[1] = 't';
	box[0].value[2] = 'h';
	box[0].value[3] = 'r';
	box[0].value[4] = 'e';
	box[0].value[5] = 'e';

	box[1].key[0] = '4';
	box[1].value[0] = 'f';
	box[1].value[1] = 'o';
	box[1].value[2] = 'u';
	box[1].value[3] = 'r';

	box[2].key[0] = '1';
	box[2].key[1] = '0';
	box[2].value[0] = 't';
	box[2].value[1] = 'e';
	box[2].value[2] = 'n';

	box[3].key[0] = '1';
	box[3].key[1] = '0';
	box[3].key[2] = '0';
	box[3].key[3] = '0';
	box[3].value[0] = 't';
	box[3].value[1] = 'h';
	box[3].value[2] = 'o';
	box[3].value[3] = 'u';
	box[3].value[4] = 's';
	box[3].value[5] = 'a';
	box[3].value[6] = 'n';
	box[3].value[7] = 'd';
	return (box);
}

