CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror
OBJEC		= 	$(SRC:.c=.o)

#----------------------------------------------#
#			  archive file name
#----------------------------------------------#
NAME		=	libft.a

#----------------------------------------------#
#				source code 
#----------------------------------------------#
SRC			=	ft_strlen.c \
			 ft_memmove.c \
			 ft_memcpy.c \
			 ft_strlcpy.c \
			 ft_strlcat.c \
			 ft_isalpha.c \
			 ft_isdigit.c \
			 ft_isalnum.c \
			 ft_isascii.c \
			 ft_isprint.c \
			 ft_memset.c \
			 ft_bzero.c \
			 ft_toupper.c \
			 ft_tolower.c \
			 ft_strchr.c \
			 ft_strrchr.c \
			 ft_strncmp.c \
			 ft_atoi.c \
			 ft_calloc.c \
			 ft_strdup.c \
			 ft_strnstr.c \
			 ft_memchr.c \
			 ft_memcmp.c \
			 ft_substr.c \
			 ft_strjoin.c \
			 ft_putchar_fd.c \
			 ft_putendl_fd.c \
			 ft_putstr_fd.c \
			 ft_putnbr_fd.c \
			 ft_strtrim.c \





#----------------------------------------------#
# 					Colors
#----------------------------------------------#
NO_COLOR    = \033[0m
GRAY 		= \033[0;90m
RED 		= \033[0;91m
GREEN 		= \033[0;92m


all			: $(NAME)

#----------------------------------------------#
#		  compiling src files to object 
#----------------------------------------------#
%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "\r ⌛$(GRAY)Making libft$(NO_COLOR)"
#----------------------------------------------#



#----------------------------------------------#
#				creat Archiive
#----------------------------------------------#
$(NAME)		: $(OBJEC)
	@ar rc $(NAME) $(OBJEC)
	@printf "\r$(GREEN) 🗃️ your libft is ready$(NO_COLOR)✅\n"

#----------------------------------------------#
#				delete object file
#----------------------------------------------#
clean		:
	@rm -f $(OBJEC)
	@printf "🚮 $(RED)delete all object files <*.o>\n$(NO_COLOR)"
#----------------------------------------------#
#		 delete object file and archive
#----------------------------------------------#
fclean		: clean
	@rm -f $(NAME)
	@printf "🚮 $(RED)delet libft.a\n$(NO_COLOR)"


#----------------------------------------------#
#			delete all and remake it
#----------------------------------------------#
re			: fclean all

.PHONY		: all clean fclean re