/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccommiss <ccommiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 11:32:28 by marvin            #+#    #+#             */
/*   Updated: 2021/05/13 11:33:55 by ccommiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H 

int ft_strlen(char *str1);
char *ft_strcpy(char *dest, const char *src);
int ft_strcmp(const char *s1, const char *s2);
size_t ft_write(int fd, const void *buf, size_t count);
size_t ft_read(int fd, void *buf, size_t count);
char *ft_strdup(const char *s);

#endif