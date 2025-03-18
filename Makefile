NAME = libftprintf.a
LIBFT_DIR = ./Libft
LIBFT = $(LIBFT_DIR)/libft.a
INCLUDES = ./includes
SRC = ft_printf.c printfchar.c printfstr.c printfptr.c nbr_base.c
OBJ = $(SRC:%.c=%.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

all: $(LIBFT) $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	cd Libft && make
	$(AR) $(NAME) $(OBJ) $(LIBFT) Libft/*.o
	@echo "Library $(NAME) created and linked with Libft."

%.o: %.c
	$(CC) $(CFLAGS) -I $(INCLUDES) -I $(LIBFT_DIR)/includes -c $< -o $@

$(LIBFT):
	@make -C $(LIBFT_DIR)

clean:
	$(RM) $(OBJ)
	@make clean -C $(LIBFT_DIR)
	@echo "Cleaned object files."

fclean: clean
	$(RM) $(NAME)
	@make fclean -C $(LIBFT_DIR)
	@echo "Fully cleaned."

re: fclean all
