/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakamat <ktakamat@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 21:34:16 by ktakamat          #+#    #+#             */
/*   Updated: 2024/06/16 21:40:42 by ktakamat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

t_token	*create_dless_token(char **tmp, char *line)
{
	char	*set;

	set = ft_strdup("<<");
	*tmp = &line[2];
	return (create_token(set, TK_DLESS));
}

t_token	*create_less_token(char **tmp, char *line)
{
	char	*set;

	set = ft_strdup("<");
	*tmp = &line[1];
	return (create_token(set, TK_LESS));
}

t_token	*create_dgreat_token(char **tmp, char *line)
{
	char	*set;

	set = ft_strdup(">>");
	*tmp = &line[2];
	return (create_token(set, TK_DGREAT));
}

t_token	*create_great_token(char **tmp, char *line)
{
	char	*set;

	set = ft_strdup(">");
	*tmp = &line[1];
	return (create_token(set, TK_GREAT));
}
