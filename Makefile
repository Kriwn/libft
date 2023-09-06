NAME = libft.a

# Sources
SRCS =	ft_atoi.c\
		ft_isalnum.c\
		ft_isdigit.c\
		ft_memcmp.c\
		ft_memset.c\
		ft_strjoin.c\
		ft_strlen.c\
		ft_strrchr.c\
		ft_tolower.c\
		ft_bzero.c\
		ft_isalpha.c\
		ft_isprint.c\
		ft_memcpy.c\
		ft_strchr.c\
		ft_strncmp.c\
		ft_toupper.c\
		ft_calloc.c\
		ft_isascii.c\
		ft_memchr.c\
		ft_memmove.c\
		ft_strdup.c\
		ft_substr.c

# Objects
OBJS = $(SRCS:.c=.o)

# Compiler
CC = cc
CFLAGS = -Wall \
		 -Wextra \
		 -Werror \
		 -I ./

# Targets
all: $(NAME)

$(NAME): $(OBJS)
	$(AR) -r $@ $?

%.o: %.c
	$(CC) -c $(CFLAGS) $^ -o $@

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
