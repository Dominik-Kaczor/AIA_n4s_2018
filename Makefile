##
## EPITECH PROJECT, 2018
## Navy
## File description:
## Makefile
##

SRC		=	src/check_end.c	\
			src/exec_cmd.c	\
			src/get_dir.c	\
			src/ia.c	\
			src/main.c	\

SRC_TEST	=	tests/tests_of_n4s.c \
			tests/main_for_tests.c	\
			src/check_end.c	\
			src/exec_cmd.c	\
			src/get_dir.c	\
			src/ia.c	\

SRC_BONUS	=	src/exec_cmd.c	\
			bonus/main.c	\
			src/ia.c	\
			src/get_dir.c	\
			src/check_end.c	\

OBJ		=	$(SRC:.c=.o)

OBJ_TEST	=	$(SRC_TEST:.c=.o)

OBJ_BONUS	=	$(SRC_BONUS:.c=.o)

CFLAGS		=	-Wextra

GRAF		=	-lcsfml-window -lcsfml-system -lcsfml-graphics \
-lcsfml-audio

CPPFLAGS	=	-I./include/

LIB		=	-L./lib/my/ -lmy

NAME		=	ai

NAME_TEST	=	unit_tests

CC		=	gcc

RM		=	rm -f

all:		lib $(NAME)

$(NAME):	$(OBJ)
		$(CC) $(CPPFLAGS) -o $(NAME) $(OBJ) $(LIB)

clean:
		$(RM) $(OBJ)

fclean:	clean lib_clean
	$(RM) $(NAME)

re:		fclean all

debug:	CFLAGS += -g3
debug:	re

lib:
		@make --no-print-directory re -C ./lib
		@make --no-print-directory clean -C ./lib

lib_clean:
		@make --no-print-directory fclean -C ./lib

tests_run: 	lib $(OBJ)
		$(CC) $(CPPFLAGS) -o $(NAME_TEST) $(SRC_TEST) $(LIB) --coverage -lcriterion
		./$(NAME_TEST)

bonus_run:	lib $(OBJ_BONUS)
		$(CC) $(CPPFLAGS) -o $(NAME) $(SRC_BONUS) $(LIB) $(GRAF)

rm_test:	fclean
		$(RM) $(NAME_TEST)
		$(RM) *.gcda
		$(RM) *.gcno

all_clean: fclean rm_test

.PHONY:		all clean fclean re lib lib_clean tests_run rm_test
