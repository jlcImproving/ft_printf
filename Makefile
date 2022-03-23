# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jde-alme <jde-alme@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/30 19:15:16 by jde-alme          #+#    #+#              #
#    Updated: 2022/03/23 20:27:52 by jde-alme         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ------------  PROJECT  ----------------------------------------------------- #
NAME	=		libftprintf.a

# ------------  DIRECTORIES  ------------------------------------------------- #
SRC_DIR	=		srcs
HDR_DIR	=		includes
OBJ_DIR	=		objs
LIBFT_DIR =		libft
FT_PRINTF_DIR =	ft_printf

# ------------  SOURCE FILES  ------------------------------------------------ #

SRC_FLS	=		$(LIBFT_FLS)\
				$(FT_PRINTF_FLS)\

LIBFT_FLS = 	$(LIBFT_DIR)/ft_isdigit.c			\
				$(LIBFT_DIR)/ft_strdup.c			\
				$(LIBFT_DIR)/ft_putchar_fd.c		\
				$(LIBFT_DIR)/ft_strlen.c			\
				$(LIBFT_DIR)/ft_tolower.c			\
				$(LIBFT_DIR)/ft_itoa.c				\

FT_PRINTF_FLS = $(FT_PRINTF_DIR)/ft_printf.c		\
				$(FT_PRINTF_DIR)/ft_treatment.c 	\
				$(FT_PRINTF_DIR)/ft_treat_width.c 	\
				$(FT_PRINTF_DIR)/ft_u_itoa.c 		\
				$(FT_PRINTF_DIR)/ft_ull_base.c 		\
				$(FT_PRINTF_DIR)/ft_putchar.c 		\
				$(FT_PRINTF_DIR)/ft_str_tolower.c 	\
				$(FT_PRINTF_DIR)/ft_putstrprec.c 	\
				$(FT_PRINTF_DIR)/ft_treat_string.c 	\
				$(FT_PRINTF_DIR)/ft_treat_char.c 	\
				$(FT_PRINTF_DIR)/ft_treat_pointer.c \
				$(FT_PRINTF_DIR)/ft_treat_int.c 	\
				$(FT_PRINTF_DIR)/ft_treat_uint.c 	\
				$(FT_PRINTF_DIR)/ft_treat_percent.c \
				$(FT_PRINTF_DIR)/ft_treat_hexa.c 	\
				$(FT_PRINTF_DIR)/ft_treat_flags.c	\

# ------------  FILEPATHS  --------------------------------------------------- #
SRCS	=		$(addprefix $(SRC_DIR)/, $(SRC_FLS))
OBJS	=		$(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o, $(SRCS))
DEPS	=		$(OBJS:.o=.d)

# ------------  FLAGS  ------------------------------------------------------- #
CC		=		gcc
RM		=		rm -rf
CFLGS	=		-Wall -Werror -Wextra
IFLGS	=		-I $(HDR_DIR)
DFLGS	=		-MMD -MP -O1

# ------------  RULES  ------------------------------------------------------- #
.PHONY: all clean fclean re

all: $(NAME)

-include $(DEPS)
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLGS) $(DFLGS) -c -o $@ $< $(IFLGS)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)
	mkdir -p $(OBJ_DIR)/$(LIBFT_DIR)
	mkdir -p $(OBJ_DIR)/$(FT_PRINTF_DIR)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all
