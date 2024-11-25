# Nome do programa/biblioteca
NAME = libftprintf.a

# Diretórios
SRCDIR = src
INCDIR = inc
OBJDIR = obj

# Arquivos fonte
SRC = $(SRCDIR)/ft_printf.c \
      $(SRCDIR)/ft_puthex.c \
      $(SRCDIR)/ft_putnbr.c \
      $(SRCDIR)/ft_putstr.c \
      $(SRCDIR)/ft_putvoid.c

# Arquivos objetos
OBJ = $(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

# Compilador e flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(INCDIR)

# Regras principais
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

# Compilação dos arquivos objetos
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Limpeza de objetos
clean:
	rm -rf $(OBJDIR)

# Limpeza completa
fclean: clean
	rm -f $(NAME)

# Recompilar tudo
re: fclean all

.PHONY: all clean fclean re