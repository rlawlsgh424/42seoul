#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

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

int	ft_strcmp(char *str1, char *str2)
{
	while(*str1 && *str2)
	{
		if (*str1 != *str2)
			break;
		str1++;
		str2++;
	}
	return ((unsigned char)*str1 - (unsigned char)*str2);
}

void	dict_init(dict *dic)
{
	dic->count = 0;
	dic->head = NULL;
}

void	dict_add_to_next(_dict *tmp, char *key, void *value)
{
	tmp->link = (_dict *)malloc(sizeof(_dict));
	tmp->link->key = key;
	tmp->link->value = value;
	tmp->link->link = NULL;
}


int	dict_add(dict *dic, char *key, void *value)
{
	_dict	*tmp = dic->head;

	while (1)
	{
		if (dic->count == 0)
		{
			tmp = (_dict *)malloc(sizeof(_dict));
			tmp->key = key;
			tmp->value = value;
			tmp->link = NULL;
			dic->head = tmp;
			break ;
		}
		else if (ft_strcmp(tmp->key, key) == 0)
			return (0);
		else if (tmp->link == NULL)
		{
			dict_add_to_next(tmp, key, value);
			break ;
		}
		else
			tmp = tmp->link;
	}
	dic->count++;
	return (1);
}

void	dict_out(dict dic)
{
	_dict	*tmp = dic.head;
	int	i = 0;
	int	j = 0;  
  
	write(1, &dic.count, 1);
	while (tmp != NULL)
	{
		while (tmp->key + j)
		{
			write(1, tmp->key + j, 1);
			j++;
		}
		i++;
		tmp = tmp->link;
	}
}

void	*dict_search(dict dic, char *key)
{
	_dict *tmp = dic.head;

	while (1)
	{
		if (tmp == NULL)
			return (NULL);
		if (ft_strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->link;
	}
}

int	dict_free(dict *dic)
{
	if (dic->count == 0)
		return (1);
	_dict	*ptr = dic->head;
	_dict	*next = ptr->link;

	while (1)
	{
		free(ptr);
		if (next == NULL)
			break ;
		ptr = next;
		next = ptr->link;
	}
	dic->count = 0;
	dic->head = NULL;
	return (1);
}

int	main()
{
	dict	dic;
//	char	*a;

	dict_init(&dic);
	dict_add(&dic, "key1", "value1");
	dict_add(&dic, "key2", "value2");
	dict_add(&dic, "key3", "value3");

	dict_out(dic);
	char *a = (char *)dict_search(dic, "key2");
	printf("what is the value of key2?  %s\n", a);
	dict_free(&dic);
	return (0);
}
