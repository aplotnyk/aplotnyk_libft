# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aplotnyk <aplotnyk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/28 16:05:40 by aplotnyk          #+#    #+#              #
#    Updated: 2023/02/22 15:36:32 by aplotnyk         ###   ########.fr        #
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
	ft_memcpy.c \
    ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c
	
MY_SOURCES_BONUS = ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c

MY_HEADER = libft.h

MY_OBJECTS = $(MY_SOURCES:.c=.o)

OBJECTS_BONUS = $(MY_SOURCES_BONUS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

.c.o:
	cc $(CFLAGS) -c -I libft.h $< -o ${<:.c=.o}
	
$(NAME):$(MY_OBJECTS)
	ar rcs $(NAME) $(MY_OBJECTS)

bonus: $(OBJECTS_BONUS)
	ar rc $(NAME) $(OBJECTS_BONUS)

all: $(NAME)

clean:
	rm -f $(MY_OBJECTS) $(OBJECTS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

so:
	cc -nostartfiles -fPIC $(CFLAGS) $(MY_SOURCES) $(MY_SOURCES_BONUS)
	gcc -nostartfiles -shared -o libft.so $(MY_OBJECTS) $(OBJECTS_BONUS)
	
.PHONY: clean fclean re
