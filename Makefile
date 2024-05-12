# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afilippo <afilippo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/12 17:55:50 by afilippo          #+#    #+#              #
#    Updated: 2024/05/12 18:30:17 by afilippo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =  ft_atoi.c \
	  ft_bzero.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_itoa.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_memcpy.c \
	  ft_memmove.c \
	  ft_memset.c \
	  ft_putchar_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \
	  ft_putstr_fd.c \
	  ft_strchr.c \
	  ft_striteri.c \
	  ft_strjoin.c \
	  ft_strlcat.c \
	  ft_strlen.c \
	  ft_strmapi.c \
	  ft_strncmp.c \
	  ft_strlcpy.c \
	  ft_strnstr.c \
	  ft_strrchr.c \
	  ft_strtrim.c \
	  ft_tolower.c \
	  ft_toupper.c \
	  ft_calloc.c

NAME = libft.a

CC = clang

FLAG = -Wall -Werror -Wextra 

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar $(ARFLAGS) $(NAME).a $(OBJS)
	
%.o: %.c
	$(CC) $(FLAG) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "$(OBJ) deleted"
	
fclean: clean 
	@rm -f $(NAME)
	@echo "$(NAME) deleted"
	
re: fclean all

.PHONY: all, clean, fclean, re
