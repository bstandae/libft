# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bstandae <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/27 15:46:41 by bstandae          #+#    #+#              #
#    Updated: 2023/11/03 17:10:30 by bstandae         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
					ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
					ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
					ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
					ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
					ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
					ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnber_fd.c

OBJS			=	${SRCS:%.c=${OBJ_DIR}%.o}

BONUS			=	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
					ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
					ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

BONUS_OBJS		=	${BONUS:%.c=${OBJ_DIR}%.o}

HEAD			=	libft.h

OBJ_DIR			=	libft_objects/

MAKE_DIR		=	mkdir -p ${@D}

CC				=	cc

AR_RCS			=	ar rcs

RM				=	rm -rf

CFLAGS			=	-g -Wall -Wextra -Werror

NAME			=	libft.a

all:			${NAME}

${NAME}:		${OBJS} ${HEAD}
				${AR_RCS} ${NAME} ${OBJS}

${OBJ_DIR}%.o:	%.c
				${MAKE_DIR}
				${CC} ${CFLAGS} -c $< -I ${HEAD} -o $@

clean:
				${RM} ${OBJ_DIR}

fclean:			clean
				${RM} ${NAME}

re:				fclean all

bonus:			${OBJS} ${BONUS_OBJS} ${HEAD}
				${AR_RCS} ${NAME} ${OBJS} ${BONUS_OBJS}

.PHONY:			all clean fclean re bonus
