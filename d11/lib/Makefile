NAME = liblist.a
AR = ar
AFlAGS = -rcs
CC = gcc
CFLAGS = -Wall -Werror -Wextra
OBJ_DIR = obj

SRC = \
	  ft_create_elem\
	  ft_list_push_back\
	  ft_list_push_front\
	  ft_list_size\
	  ft_list_last\
	  ft_list_push_params\
	  ft_list_clear\
	  ft_list_at

OBJ = $(patsubst %, $(OBJ_DIR)/%.o, $(SRC))

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(ARFLAGS) $@ $(OBJ)
	@cp $(NAME) ../

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all
