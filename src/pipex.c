/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelrodr <abelrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 12:25:46 by abelrodr          #+#    #+#             */
/*   Updated: 2023/09/11 09:48:56 by abelrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pipex.h"

void	child(t_data *d, char **argv, char **envp)
// Child process
{
	d->src_fd = open(argv[1], O_RDONLY);
	if (d->src_fd < 0)
		err_msg(argv[1]);
	dup2(d->src_fd, STDIN_FILENO);
	dup2(d->pipe_fd[1], STDOUT_FILENO);
	close(d->pipe_fd[0]);
	exec(d, argv[2], envp);
}

void	parent(t_data *d, int argc, char **argv, char **envp)
// Parent process
{
	d->dst_fd = open(argv[argc - 1], O_RDWR | O_CREAT | O_TRUNC, 0644);
	if (d->dst_fd < 0)
		err_msg(argv[argc - 1]);
	dup2(d->pipe_fd[0], STDIN_FILENO);
	dup2(d->dst_fd, STDOUT_FILENO);
	close(d->pipe_fd[1]);
	exec(d, argv[3], envp);
}

int	main(int argc, char **argv, char **envp)
// Main function
{
	t_data	d;

	if (argc != 5)
		err_msg(ERR_ARGC);
	if (pipe(d.pipe_fd) < 0)
		err_msg(ERR_PIPE);
	d.pid = fork();
	if (d.pid < 0)
		err_msg(ERR_FORK);
	else if (d.pid == 0)
		child(&d, argv, envp);
	waitpid(d.pid, NULL, 0);
	parent(&d, argc, argv, envp);
	return (0);
}
