# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsoh <jsoh@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/06 21:30:08 by jsoh              #+#    #+#              #
#    Updated: 2025/05/18 16:00:52 by jsoh             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_NAMES = memset bzero memcpy memmove memchr memcmp strlen isalpha isdigit isalnum \
			isascii isprint toupper tolower strchr strrchr strncmp strlcpy strlcat strnstr \
			atoi calloc strdup substr strjoin strtrim split itoa strmapi putchar_fd putstr_fd \
			putendl_fd putnbr_fd striteri

SRC_FILES = $(addprefix ft_, $(addsuffix .c, $(SRC_NAMES)))
OBJ = $(SRC_FILES:.c=.o)

BONUS = lstnew_bonus lstadd_front_bonus lstsize_bonus lstlast_bonus lstadd_back_bonus lstdelone_bonus lstclear_bonus lstiter_bonus lstmap_bonus
BONUS_SRC = $(addprefix ft_, $(addsuffix .c, $(BONUS)))
BONUS_OBJ = $(BONUS_SRC:.c=.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(BONUS_OBJ)
	ar rcs $(NAME) $(BONUS_OBJ)

clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
