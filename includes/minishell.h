/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:26:08 by aniezgod          #+#    #+#             */
/*   Updated: 2024/06/03 12:29:20 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <stddef.h>
# include <stdlib.h>
# include <signal.h>
# include <dirent.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <sys/wait.h>
# include <sys/ioctl.h>
# include <stdio.h>
# include <readline/readline.h>
# include <readline/history.h>

# include "libft.h"

typedef struct s_data {
	char	*cmd;
}			t_data;

typedef struct s_cmd {
	char	*str;
	int		type;
	struct s_cmd *next;
}				t_cmd;

#endif