#ifndef FT_TEST_H
# define FT_TEST_H

typedef	struct	s_dict
{
	char	*key;
	char	*value;
}				t_dict;

t_dict	*dict_to_struct(t_dict *box);
char	**mk_arr(void);

#endif
