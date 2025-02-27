NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -g3
AR = ar rc
RN = ranlib
RM = rm -rf

SRC = ./src/
OBJ = ./.obj/

FILES = ft_printf \
		ft_putchar \
		print_format \
		ft_putstr \
		print_num

SRCS = $(addprefix $(SRC), $(addsuffix .c, $(FILES)))
OBJS = $(addprefix $(OBJ), $(addsuffix .o, $(FILES)))

$(NAME): $(OBJS)
	$(AR) $@ $^
	$(RN) $@

$(OBJ)%.o: $(SRC)%.c
	mkdir -p $(OBJ)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

run: $(NAME) main.c
	$(CC) main.c -L. -lftprintf -o printf
	clear
	./printf
