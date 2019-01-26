# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rwright <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/21 06:33:31 by rwright           #+#    #+#              #
#    Updated: 2019/01/21 06:52:56 by rwright          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
AR = ar
ARFLAGS = -rcs
CC = gcc
CCFLAGS = -Wall -Werror -Wextra
INC = -I includes
SRC_DIR = srcs
OBJ_DIR = obj

SRC = \
	  ft_putchar\
	  ft_putstr\
	  ft_strcmp\
	  ft_strlen\
	  ft_swap

OBJ = $(patsubst %, $(OBJ_DIR)/%.o, $(SRC))

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(ARFLAGS) $@ $(OBJ)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CCFLAGS) $(INC) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all
