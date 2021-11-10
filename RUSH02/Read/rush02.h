#ifndef RUSH02_H
# define RUSH02_H
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct	s_dict
{
	char			*key;
	void			*value;
	struct	s_dict	*link;
}	_dict;

typedef struct	s_dict_count
{
	int				count;
	struct	s_dict	*head;
}	dict;

int		ft_strcmp(char *str1, char *str2);
void	dict_init(dict *dic);
void	dict_add_to_next(_dict *tmp, char *key, void *value);
int		dict_add(dict *dic, char *key, void *value);
void	dict_out(dict dic);
int		dict_free(dict *dic);

#endif
