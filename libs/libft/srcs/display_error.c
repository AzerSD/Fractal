/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_error.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asioud <asioud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:06:08 by asioud            #+#    #+#             */
/*   Updated: 2022/12/20 13:06:10 by asioud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	display_error(char *error_msg, bool yeet)
{
	perror(error_msg);
	if (yeet == true)
		exit(EXIT_FAILURE);
}
