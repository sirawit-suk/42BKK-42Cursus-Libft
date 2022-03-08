CC = gcc
CFLAGS = -Wall -Werror -Wextra

# part 1
IS_LIBC = ft_isalnum.c ft_isascii.c ft_isprint.c ft_isdigit.c ft_isalpha.c
TO_LIBC = ft_toupper.c ft_tolower.c ft_atoi.c
STR_LIBC = ft_strchr.c ft_strrchr.c ft_strlen.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_strdup.c
MEM_LIBC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_calloc.c
LIBC = $(IS_LIBC) $(TO_LIBC) $(STR_LIBC) $(MEM_LIBC)

# part 2
STR_ADDC = ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c
PUT_ADDC = ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
#BONUS_ADDC =
ADDC = $(STR_ADDC) $(PUT_ADDC)
SRCS = $(LIBC) $(ADDC) $(BONUS_ADDC)
OBJS = $(SRCS:.c=.o)
NAME = libft.a
RM = rm -rf

# bonus part

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $@ $^
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all

m:
	gcc main.c -L . -lft && ./a.out
check:
	@echo "\n";
	@norminette -R CheckForbiddenSourceHeader ft_*.c *.h;
	@echo "";
	@echo "----------------------";
rename:
	@sed 's/$(OLD)/$(NEW)/g' $(OLD).c > $(NEW).c
so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)
