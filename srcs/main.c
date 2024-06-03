/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:38:48 by aniezgod          #+#    #+#             */
/*   Updated: 2024/06/03 12:48:27 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

t_data *g_data;

int is_spec(char c)
{
	if (c == "|" || c == "<" || c == ">")
		return (1);
	return(0);
}

int is_quote(char c)
{
	if (c == '\'' || c == "\"")
}

void create_list()
{
	int i;

	i = 0;
	while(g_data->cmd[i])
	{
		if (ft_isascii(g_data->cmd[i]) && !is_spec(g_data->cmd[i]))
	}
}

//different type : char 
//                quote
//				  spec (|, >>, <<)
void parsing()
{
	g_data->cmd = ft_strtrim(g_data->cmd, " ");
	create_list();
}

int main()
{
	int error = 0;
	g_data = malloc(sizeof(t_data));
	while(error != 1)
	{
		g_data->cmd = readline("$> ");
		parsing();
		error = 1;
	}
}