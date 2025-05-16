# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsoh <jsoh@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/06 21:30:08 by jsoh              #+#    #+#              #
#    Updated: 2025/05/11 16:46:34 by jsoh             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC		= $(wildcard *.c)
OBJ		= $(SRC:.c=.o)
NAME	= libft.a
BONUS	= lstnew lstadd_front lstsize lstlast lstadd_back lstdelone lstclear lstiter lstmap
BONUS_OBJ = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus:
	@echo "Bonus files:"
	@for file in $(BONUS); do echo $$file; done

bonus_compile: $(BONUS_OBJ)
	@echo "Bonus object files compiled: $(BONUS_OBJ)"

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
