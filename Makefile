# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aplotnyk <aplotnyk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/28 16:05:40 by aplotnyk          #+#    #+#              #
#    Updated: 2023/02/08 19:55:11 by aplotnyk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

MY_SOURCES = ft_isalnum.c \
    ft_isalpha.c \
    ft_isascii.c \
    ft_isdigit.c \
    ft_isprint.c \
    ft_strlen.c \
    ft_memset.c \
    ft_bzero.c \
    ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_strchr.c \
	ft_strrchr.c

MY_HEADER = libft.h

MY_OBJECTS = $(MY_SOURCES:.c=.o)

CFLAGS = -Wall -Wextra -Werror

.c.o:
	cc $(CFLAGS) -c -I libft.h $< -o ${<:.c=.o}
	
so:
	cc -nostartfiles -fPIC $(CFLAGS) $(MY_SOURCES)
	gcc -nostartfiles -shared -o libft.so $(MY_OBJECTS)
	
$(NAME):$(MY_OBJECTS)
	ar rcs $(NAME) $(MY_OBJECTS)

all: $(NAME)

clean:
	rm -f $(MY_OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

	
.PHONY: clean fclean re
