# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/12 11:08:46 by adhaka            #+#    #+#              #
#    Updated: 2023/06/20 23:18:05 by adhaka           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 			=	ft_atoi.c \
					ft_bzero.c \
					ft_calloc.c \
					ft_isalnum.c \
					ft_strlen.c \
					ft_putendl_fd.c \
					ft_putstr_fd.c \
					ft_isalpha.c \
					ft_isascii.c \
					ft_isdigit.c \
					ft_isprint.c \
					ft_memset.c \
					ft_memcpy.c \
					ft_tolower.c \
					ft_toupper.c \
					ft_memmove.c \
					ft_memcmp.c \
					ft_putchar_fd.c \
					ft_putnbr_fd.c \
					ft_strchr.c \
					ft_strrchr.c \
					ft_memchr.c \
					ft_strncmp.c \
					ft_strlcpy.c \
					ft_strlcat.c \
					ft_strnstr.c \
					ft_substr.c \
					ft_strdup.c \
					ft_strjoin.c \
					ft_strmapi.c \
					ft_striteri.c \
					ft_strtrim.c \
					ft_itoa.c \
					ft_split.c \
					ft_printf.c \
					ft_print_hex.c \
					ft_print_nbr.c \
					ft_print_ptr.c \
					ft_print_unsigned.c \
					ft_print_utils.c

OBJS			= $(SRCS:.c=.o)

CC				= cc

RM				= rm -f

CFLAGS			= -Wall -Wextra -Werror

NAME			= libft.a

$(NAME):		$(OBJS)
				ar -rcs $(NAME) $(OBJS)

all:			$(NAME)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
