# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tollivan <tollivan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/06 18:30:47 by tollivan          #+#    #+#              #
#    Updated: 2019/09/20 16:35:18 by tollivan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INCL = ./libft.h

SOURCE = ./ft_bzero.c ./ft_memset.c ./ft_strcat.c ./ft_strcpy.c \
		./ft_strdup.c ./ft_strlen.c ./ft_strncat.c ./ft_strncpy.c \
		./ft_strstr.c ./ft_putchar.c ./ft_putstr.c ./ft_putendl.c \
		./ft_putnbr.c ./ft_putchar_fd.c ./ft_putstr_fd.c ./ft_putendl_fd.c \
		./ft_putnbr_fd.c ./ft_isdigit.c ./ft_isalpha.c ./ft_isalnum.c \
		./ft_isascii.c ./ft_isprint.c ./ft_strcmp.c ./ft_strclr.c \
		./ft_memalloc.c ./ft_memdel.c ./ft_strnew.c ./ft_strdel.c \
		./ft_striter.c ./ft_striteri.c ./ft_strmap.c ./ft_strmapi.c \
		./ft_toupper.c ./ft_tolower.c ./ft_strncmp.c ./ft_strnstr.c \
		./ft_memcpy.c ./ft_strequ.c ./ft_strnequ.c ./ft_memccpy.c \
		./ft_memmove.c ./ft_memchr.c ./ft_memcmp.c ./ft_strchr.c \
		./ft_strrchr.c ./ft_atoi.c ./ft_strlcat.c ./ft_strsub.c \
		./ft_strjoin.c ./ft_itoa.c ./ft_strtrim.c ./ft_strsplit.c \
		./ft_numlen.c ./ft_lstnew.c ./ft_lstdelone.c ./ft_lstdel.c \
		./ft_lstadd.c ./ft_lstiter.c ./ft_lstmap.c ./ft_numlen.c \
		./ft_ismin.c ./ft_ismax.c ./ft_clamp.c ./ft_strlenchr.c

OBJ = $(SOURCE:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) libft.h
	gcc -Wall -Werror -Wextra -I $(INCL) -c $(SOURCE)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
