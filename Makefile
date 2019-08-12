NAME1 = checker
NAME2 = push_swap
LIB = libft
FLAGS = -Wall -Werror -Wextra
CH_SRC = checker.c input_one.c manipulations_one.c manipulations_two.c
CH_SRC += manipulations_three.c output_check.c stack_ops.c
CH_SRC += ./get_next_line/get_next_line.c input_two.c
PS_SRC = push_swap.c sorting_algo_one.c manipulations_one.c manipulations_two.c
PS_SRC += manipulations_three.c input_one.c stack_ops.c output_check.c
PS_SRC += sorting_algo_two.c stack_ops_algo.c input_two.c

all: $(LIB) $(NAME1) $(NAME2)

$(LIB):
	make -C ./libft re
	make -C ./libft clean

$(NAME1):
	gcc -o $(NAME1) $(FLAGS) $(CH_SRC) -lft -L./libft -I.

$(NAME2):
	gcc -o $(NAME2) $(FLAGS) $(PS_SRC) -lft -L./libft -I.

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME1)
	rm -rf $(NAME2)

re: fclean all
