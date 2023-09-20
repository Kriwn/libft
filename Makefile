NAME = libft.a

SRCS = ft_lstnew.c ft_lstadd_front.c \
			 ft_lstsize.c ft_lstlast.c \
			 ft_lstadd_back.c ft_lstdelone.c \
			 ft_lstclear.c 

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
	rm -f $(OBJS) $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
