# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aeddi <aeddi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/27 14:49:42 by aeddi             #+#    #+#              #
#    Updated: 2016/10/27 15:08:59 by aeddi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				=	clang
CFLAGS			=	-Wall -Wextra -Werror

COLLEEN			=	Colleen
COL_OBJS		=	$(patsubst %.c, %.o, $(COL_SRCS))
COL_SRCS		=	Colleen.c

GRACE			=	Grace
GRA_OBJS		=	$(patsubst %.c, %.o, $(GRA_SRCS))
GRA_SRCS		=	Grace.c

SULLY			=	Sully
SUL_OBJS		=	$(patsubst %.c, %.o, $(SUL_SRCS))
SUL_SRCS		=	Sully.c

all				:	$(COLLEEN) $(GRACE) $(SULLY)

$(COLLEEN)		:	$(COL_OBJS)
	@echo "Linking $@"
	@$(CC) -o $@ $(COL_OBJS)

$(COL_OBJS)		:	$(COL_SRCS)
	@$(CC) $(CFLAGS) -o $@ -c $^

$(GRACE)		:	$(GRA_OBJS)
	@echo "Linking $@"
	@$(CC) -o $@ $(GRA_OBJS)

$(GRA_OBJS)		:	$(GRA_SRCS)
	@$(CC) $(CFLAGS) -o $@ -c $^

$(SULLY)		:	$(SUL_OBJS)
	@echo "Linking $@"
	@$(CC) -o $@ $(SUL_OBJS)

$(SUL_OBJS)		:	$(SUL_SRCS)
	@$(CC) $(CFLAGS) -o $@ -c $^

fclean			:	clean
	@echo "Removing executables"
	@rm -f $(COLLEEN) $(GRACE) $(SULLY)

clean			:
	@echo "Removing objects"
	@rm -rf $(COL_OBJS) $(GRA_OBJS) $(SUL_OBJS)

re				:	fclean all

.PHONY: clean fclean re all
