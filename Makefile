NAME1 = checker
NAME2 = push_swap
LIB = libft
FLAGS = -Wall -Werror -Wextra
CH_SRC = checker.c input_one.c manipulations_one.c manipulations_two.c
CH_SRC += manipulations_three.c validate.c stack_ops.c visualizer.c
CH_SRC += ./get_next_line/get_next_line.c input_two.c
PS_SRC = push_swap.c sorting_algo_one.c manipulations_one.c manipulations_two.c
PS_SRC += manipulations_three.c input_one.c stack_ops.c validate.c sorting_algo_two.c
PS_SRC += sorting_algo_three.c algo_ops_one.c algo_ops_two.c input_two.c visualizer.c

all: $(LIB) $(NAME1) $(NAME2)

$(LIB): relib cleanlib
	@echo "[Libft] Compiled"

$(NAME1):
	@gcc -o $(NAME1) $(FLAGS) $(CH_SRC) -lft -L./libft -I.
	@echo "[$(NAME1)] Compiled"

$(NAME2):
	@gcc -o $(NAME2) $(FLAGS) $(PS_SRC) -lft -L./libft -I.
	@echo "[$(NAME2)] Compiled"

clean:
	@/bin/rm -f *.o
	@echo "Cleaned Objects"

fclean: clean
	@/bin/rm -f $(NAME1)
	@/bin/rm -f $(NAME2)
	@/bin/rm -f ./libft/libft.a
	@echo "Cleaned All"

re: fclean all

relib:
	@make -C ./libft re

cleanlib:
	@make -C ./libft clean