NAME	=	libftprintf.a

SRCS	=	ft_printf.c\
			ft_printf_percents_csidu.c\
			ft_printf_percents_px.c\
			ft_frintf_hexadecimal.c\
			ft_frintf_mini_itoa.c\
			ft_frintf_mini_itoa_u.c	

HEADER	=	ft_printf.h
OBJ		=	$(patsubst %.c, %.o, $(SRCS))

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -I$(HEADER)

.PHONY	:	all clean fclean re

all		:	$(NAME)

$(NAME) : 	$(OBJ) $(HEADER)
	ar rcs $(NAME) $?

%.o : %.c $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@

clean	:
	@rm -f $(OBJ)

fclean	: clean
	@$(RM) $(NAME)

re		:	fclean all