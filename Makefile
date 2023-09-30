# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/01 14:32:06 by adhaka            #+#    #+#              #
#    Updated: 2023/06/21 00:47:10 by adhaka           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 			= minitalk
SERVER			= server
CLIENT			= client

CC				= cc

RM				= rm -f

CFLAGS			= -Wall -Wextra -Werror

LIBFT_DIR =		./libft
LIBFT =			$(LIBFT_DIR)/libft.a

$(NAME):		$(SERVER) $(CLIENT)

all:			$(NAME)

$(SERVER):		server.c $(LIBFT)
				$(CC) $(CFLAGS) $^ -o $@

$(CLIENT):		client.c $(LIBFT)
				$(CC) $(CFLAGS) $^ -o $@

$(LIBFT):
				make -C $(LIBFT_DIR)

clean:
				make clean -C $(LIBFT_DIR)
				$(RM) $(SERVER) $(CLIENT)

fclean:			clean
				make fclean -C $(LIBFT_DIR)
				$(RM) $(SERVER) $(CLIENT)

re:				fclean all

.PHONY:			all clean fclean re minitalk server client
