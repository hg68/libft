# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hgill <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/28 12:30:38 by hgill             #+#    #+#              #
#    Updated: 2022/03/22 10:43:54 by hgill            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	= ft_atoi.c \
	  ft_bzero.c \
	  ft_calloc.c \
	  ft_memchr.c \
	  ft_split.c \
	  ft_strncmp.c \
	  ft_memcmp.c \
	  ft_strchr.c \
	  ft_strnstr.c \
	  ft_calloc.c \
	  ft_memcpy.c \
	  ft_strdup.c \
	  ft_strrchr.c \
	  ft_isalnum.c \
	  ft_memmove.c \
	  ft_striteri.c \
	  ft_strtrim.c \
	  ft_isalpha.c \
	  ft_memset.c \
	  ft_strjoin.c \
	  ft_substr.c \
	  ft_isascii.c \
	  ft_putchar_fd.c \
	  ft_strlcat.c \
	  ft_tolower.c \
	  ft_isdigit.c \
	  ft_putendl_fd.c \
	  ft_strlcpy.c \
	  ft_toupper.c \
	  ft_isprint.c \
	  ft_putnbr_fd.c \
	  ft_strlen.c \
	  ft_itoa.c \
	  ft_putstr_fd.c \
	  ft_strmapi.c \

OBJS = $(SRC:%.c=%.o)

NAME=libft.a

CFLAGS=-Wall -Werror -Wextra

$(NAME):
	gcc $(CFLAGS) -c $(SRC) -I./
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
