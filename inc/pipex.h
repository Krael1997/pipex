/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelrodr <abelrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 12:25:52 by abelrodr          #+#    #+#             */
/*   Updated: 2023/09/11 09:49:14 by abelrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

/*---------------------------  Libs  ------------------------------------*/
# include "../libft/inc/libft.h"
# include <errno.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <sys/wait.h>

/*--------------------------  Macros  ----------------------------------------*/
# define ERR_ARGC "Invalid number of arguments"
# define ERR_PIPE "Failed to open pipe"
# define ERR_FORK "Failed to forking"
# define ERR_CMD "Command not found"

/*---------------------------  Struct  ----------------------------------*/
typedef struct s_data
{
	int		src_fd;
	int		dst_fd;
	int		pipe_fd[2];
	char	**paths;
	char	**cmd_args;
	char	*cmd;
	pid_t	pid;

}			t_data;
/*---------------------------  Functions  ------------------------------------*/
void		err_msg(char *err_msg);
void		exec(t_data *d, char *cmd, char **envp);

#endif
