# Colors
GREY = \033[4;34m
RED = \033[1;31m
GREEN = \033[3;32m
YELLOW = \033[2;49;33m
BLUE = \033[4;34m
BLUEE = \033[3;34m
PURPLE = \033[3;35m
CYAN = \033[3;36m
RESET = \033[0m
ICONOK = \033[1;32m
ICONKO = \033[1;31m
CO_DELET = \033[3;31m
CO_A_OUT = \033[96m
WHITE = \033[1;49;97m

NAME = libasm.a

HEADER = ./Includes

CC = gcc

SRCS =

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all:	$(NAME)

%.o: %.c $(HEADER)
			@printf "\033[2K\r$(PURPLE)$<: $(CYAN)loading..$(RESET)"
			@gcc $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS) $(HEADER)
		@ar rcs $(NAME) $(OBJS)
		@printf "\033[2K\r$(BLUE)$(NAME)$(RESET)$(BLUEE): $(ICONOK)Success [√]$(RESET)\n"

clean:
		@$(RM) $(OBJS)

fclean:
		@$(RM) $(OBJS)
		@$(RM) $(NAME)

re : fclean all

help :
		@printf "\n$(GREY)Welcome to my Makefile.$(RESET)\n\n"
		@printf "$(YELLOW)all              $(RESET)$(WHITE) - run compilation of libftprintf.a  \n\n"
		@printf "$(YELLOW)clean            $(RESET)$(WHITE) - delete all .o (OBJS) \n\n"
		@printf "$(YELLOW)fclean           $(RESET)$(WHITE) - delete all .o (OBJS) and libftprintf.a \n\n"
		@printf "$(YELLOW)re               $(RESET)$(WHITE) - do fclean and all\n\n"

.PHONY: all clean fclean re help