# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tthulo <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/24 12:30:00 by tthulo            #+#    #+#              #
#    Updated: 2018/06/11 12:49:20 by tthulo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Werror -Wextra

CC =  gcc

OBJ = ft_isalpha.o ft_memchr.o ft_memset.o ft_memmove.o ft_memcmp.o ft_memcpy.o ft_memccpy.o ft_strcpy.o ft_strncpy.o ft_strlcat.o ft_strstr.o ft_strnstr.o ft_isascii.o ft_strlen.o ft_bzero.o ft_strdup.o ft_atoi.o ft_isprint.o ft_isalnum.o ft_isdigit.o ft_strcmp.o ft_strncmp.o ft_memalloc.o ft_strchr.o ft_toupper.o ft_tolower.o ft_strequ.o ft_putchar.o ft_strjoin.o ft_strnequ.o ft_putstr.o ft_putendl.o ft_putnbr.o ft_strcat.o ft_strncat.o ft_itoa.o ft_strclr.o ft_striter.o ft_striteri.o ft_strmap.o ft_strmapi.o ft_memdel.o ft_strnew.o ft_strdel.o ft_strsub.o ft_strrchr.o ft_strtrim.o ft_strsplit.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJ):
	$(CC) -c $*.c -o $@ $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
