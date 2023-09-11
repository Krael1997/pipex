/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelrodr <abelrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 19:59:18 by abelrodr          #+#    #+#             */
/*   Updated: 2023/09/11 09:50:09 by abelrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pipex_bonus.h"

void	err_msg(char *err_msg)
// Print error message and exit
{
	perror(err_msg);
	exit(EXIT_FAILURE);
}

int	open_fd(char *file, int n)
// Open file descriptor
{
	int	fd;

	fd = 0;
	if (n == 1)
		fd = open(file, O_RDONLY);
	else if (n == 2)
		fd = open(file, O_RDWR | O_CREAT | O_TRUNC, 0644);
	else if (n == 3)
		fd = open(file, O_RDWR | O_CREAT | O_APPEND, 0644);
	if (fd < 0)
		err_msg(file);
	return (fd);
}

static char	*find_path(char **envp)
// Find the PATH variable in the envp
{
	while (ft_strncmp("PATH", *envp, 4))
		envp++;
	return (*envp + 5);
}

static char	*get_cmd(char **paths, char *cmd)
// Get the command path
{
	char	*tmp;
	char	*command;

	while (*paths)
	{
		tmp = ft_strjoin(*paths, "/");
		command = ft_strjoin(tmp, cmd);
		free(tmp);
		if (access(command, X_OK) == 0)
			return (command);
		free(command);
		paths++;
	}
	return (NULL);
}

void	exec(t_data *d, char *cmd, char **envp)
// Execute the command
{
	char	*path_var;

	path_var = find_path(envp);
	d->paths = ft_split(path_var, ':');
	d->cmd_args = ft_split(cmd, ' ');
	d->cmd = get_cmd(d->paths, d->cmd_args[0]);
	if (!d->cmd)
		err_msg(ERR_CMD);
	execve(d->cmd, d->cmd_args, envp);
	ft_memfree_all(d->paths);
	ft_memfree_all(d->cmd_args);
	ft_memfree(cmd);
	ft_memfree(d);
}
