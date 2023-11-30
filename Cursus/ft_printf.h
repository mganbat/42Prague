/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganbat <mganbat@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 12:00:00 by ajordan-          #+#    #+#             */
/*   Updated: 2023/11/30 12:15:29 by mganbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_putstr_pf(char *s);
int		ft_putchar_pf(char c);
int		ft_putnbr_pf(int n);
int		ft_printf_hex(size_t nb, char c);
int		ft_putunbr_pf(unsigned int n);
size_t	ft_strlen(const char *s);

#endif
