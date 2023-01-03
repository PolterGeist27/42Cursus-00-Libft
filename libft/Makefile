DIRSRC = ./srcs/mandatory/

DIRBNS = ./srcs/bonus/

DIRINCS = ./includes/

SRC =	ft_memset \
		ft_bzero \
		ft_memcpy \
		ft_memmove \
		ft_memchr \
		ft_memcmp \
		ft_strlen \
		ft_strlcpy \
		ft_strlcat \
		ft_strchr \
		ft_strrchr \
		ft_strnstr \
		ft_strncmp \
		ft_atoi \
		ft_isalpha \
		ft_isdigit \
		ft_isalnum \
		ft_isascii \
		ft_isprint \
		ft_toupper \
		ft_tolower \
		ft_calloc \
		ft_strdup \
		ft_substr \
		ft_strjoin \
		ft_strtrim \
		ft_split \
		ft_itoa \
		ft_striteri \
		ft_strmapi \
		ft_putchar_fd \
		ft_putstr_fd \
		ft_putendl_fd \
		ft_putnbr_fd \

BNS_SRC =	ft_lstnew \
			ft_lstadd_front \
			ft_lstsize \
			ft_lstlast \
			ft_lstadd_back \
			ft_lstdelone \
			ft_lstclear \
			ft_lstiter \
			ft_lstmap \

SRCS = $(addprefix ${DIRSRC}, $(addsuffix .c, ${SRC}))
BNS_SRCS = $(addprefix ${DIRBNS}, $(addsuffix .c, ${BNS_SRC}))

OBJS = $(SRCS:.c=.o)
BNS_OBJS = $(BNS_SRCS:%.c=%.o)

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror -I $(DIRINCS)
CC = cc
LIBC = ar rc
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)																	
	$(LIBC) $(NAME) $(OBJS)

bonus: $(BNS_OBJS) $(OBJS)
	$(LIBC) $(NAME) $(BNS_OBJS) $(OBJS)

clean:
	$(RM) $(OBJS) $(BNS_OBJS)

fclean: clean
	$(RM) $(NAME)

reBns: fclean bonus

re: fclean all
