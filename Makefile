NAME = libft.a

SRC = 	ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memccpy.c\
		ft_memcmp.c\
		ft_memchr.c\
		ft_memmove.c\
		ft_strlen.c\
		ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strncmp.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_strnstr.c\
		ft_atoi.c\
		ft_strdup.c\
		ft_calloc.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_split.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putnbr_fd.c\
		ft_itoa.c

OB = $(SRC:.c=.o)
HEADER = libft.h
FLAG = -Wall -Werror -Wextra
RM = rm -f

$(NAME):
	gcc $(FLAG) -c $(SRC) -I ./includes
	ar rc $(NAME) $(OB)
	ranlib $(NAME)

all: $(NAME)

clean:
	${RM} ${OB}

fclean:	clean 
	${RM} ${NAME}

re: 	fclean all
.PHONY: all clean fclean re
