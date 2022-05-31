#===============================================================================: Filename
NAME		= libft.a

#===============================================================================: Color codes
GREEN		= \033[1;32m
RED			= \033[1;31m
BLUE		= \033[1;34m
MAGENTA		= \033[1;35m
RESET		= \033[0m

#===============================================================================: Compile variables
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra
AR			= ar rcs
RM			= rm -rf


#===============================================================================: Source to object convertion location
OBJS		= $(SRCS:.c=.o)

#===============================================================================: Sourcefiles==#
SRCS		= $(addsuffix .c, \
			ft_atoi \
			ft_bzero \
			ft_calloc \
			ft_isalnum \
			ft_isalpha \
			ft_isascii \
			ft_isdigit \
			ft_isprint \
			ft_itoa \
			ft_lstnew \
			ft_lstadd_front \
			ft_lstsize \
			ft_lstlast \
			ft_lstadd_back \
			ft_lstdelone \
			ft_lstclear \
			ft_lstiter \
			ft_lstmap \
			ft_memchr \
			ft_memcmp \
			ft_memcpy \
			ft_memmove \
			ft_memset \
			ft_putchar_fd \
			ft_putendl_fd \
			ft_putnbr_fd \
			ft_putstr_fd \
			ft_split \
			ft_strchr \
			ft_strdup \
			ft_striteri \
			ft_strjoin \
			ft_strlcat \
			ft_strlcpy \
			ft_strlen \
			ft_strmapi \
			ft_strncmp \
			ft_strnstr \
			ft_strrchr \
			ft_strtrim \
			ft_substr \
			ft_tolower \
			ft_toupper)

#===============================================================================: Make commands
all: message $(NAME)

#===============================================================================: Main compile
$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@printf "$(GREEN)✅Library \"$(NAME)\" created!$(RESET)\n"

#===============================================================================: C file compile
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
ifeq ($(DB),1)
	@printf "$(GREEN)\r🔨Compiling: $(MAGENTA)$(notdir $<)$(GREEN)\r\e[35C[OK]\n$(RESET)"
endif

#===============================================================================: Build messages
message: 
	@printf "$(GREEN)🔨Compiling \"$(NAME)\"...\n$(RESET)"

#===============================================================================: Remove all object files
clean:
	@$(RM) $(OBJS)
	@printf "$(RED)🧹Removed objects for \"$(NAME)\"!$(RESET)\n"

#===============================================================================: Remove all object files and executable
fclean: clean
	@$(RM) $(NAME)
	@printf "$(RED)🧹Removed objects for \"$(NAME)\"!$(RESET)\n"
	@printf "$(RED)🧹Removed \"$(NAME)\"!$(RESET)\n"

#===============================================================================: Remove all object files, executable and remake library
re:		fclean all

.PHONY: all, clean, fclean, re, message
