NAME = libft.a
CC = cc
OBJS = ${SRC:.c=.o}
FLAGS = -Wall -Wextra -Werror
ARG = -c
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strmapi.c \
	ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memset.c ft_putstr_fd.c ft_itoa.c ft_memmove.c ft_striteri.c\
	 ft_strchr.c  ft_strlcat.c ft_strlcpy.c ft_putnbr_fd.c ft_putchar_fd.c  ft_substr.c  \
	ft_strlen.c  ft_strncmp.c ft_strnstr.c ft_strrchr.c  ft_tolower.c ft_toupper.c ft_split.c ft_strjoin.c \
	
all : $(NAME)
$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)
	
$(OBJS):
	$(CC) $(FLAGS) $(SRC) $(ARG)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re: fclean all
