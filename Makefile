# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/30 19:15:16 by jde-alme          #+#    #+#              #
#    Updated: 2022/03/16 20:49:48 by joaocharneca     ###   ########.fr        #
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
GNL_DIR =		get_next_line

# ------------  SOURCE FILES  ------------------------------------------------ #

SRC_FLS	=		$(LIBFT_FLS)\
				$(GNL_FLS)\
				$(FT_PRINTF_FLS)\

LIBFT_FLS = 	$(LIBFT_DIR)/ft_memset.c		\
				$(LIBFT_DIR)/ft_bzero.c			\
				$(LIBFT_DIR)/ft_memcpy.c		\
				$(LIBFT_DIR)/ft_memccpy.c		\
				$(LIBFT_DIR)/ft_memmove.c		\
				$(LIBFT_DIR)/ft_memchr.c		\
				$(LIBFT_DIR)/ft_memcmp.c		\
				$(LIBFT_DIR)/ft_strlen.c		\
				$(LIBFT_DIR)/ft_isalpha.c		\
				$(LIBFT_DIR)/ft_isdigit.c		\
				$(LIBFT_DIR)/ft_isalnum.c		\
				$(LIBFT_DIR)/ft_isascii.c		\
				$(LIBFT_DIR)/ft_isprint.c		\
				$(LIBFT_DIR)/ft_toupper.c		\
				$(LIBFT_DIR)/ft_tolower.c		\
				$(LIBFT_DIR)/ft_strchr.c		\
				$(LIBFT_DIR)/ft_strrchr.c		\
				$(LIBFT_DIR)/ft_strncmp.c		\
				$(LIBFT_DIR)/ft_strlcpy.c		\
				$(LIBFT_DIR)/ft_strlcat.c		\
				$(LIBFT_DIR)/ft_strnstr.c		\
				$(LIBFT_DIR)/ft_atoi.c			\
				$(LIBFT_DIR)/ft_calloc.c		\
				$(LIBFT_DIR)/ft_strdup.c		\
				$(LIBFT_DIR)/ft_substr.c		\
				$(LIBFT_DIR)/ft_strjoin.c		\
				$(LIBFT_DIR)/ft_strtrim.c		\
				$(LIBFT_DIR)/ft_split.c			\
				$(LIBFT_DIR)/ft_itoa.c			\
				$(LIBFT_DIR)/ft_strmapi.c		\
				$(LIBFT_DIR)/ft_putchar_fd.c	\
				$(LIBFT_DIR)/ft_putstr_fd.c		\
				$(LIBFT_DIR)/ft_putendl_fd.c	\
				$(LIBFT_DIR)/ft_putnbr_fd.c		\
				$(LIBFT_DIR)/ft_lstnew.c		\
				$(LIBFT_DIR)/ft_lstadd_front.c	\
				$(LIBFT_DIR)/ft_lstsize.c		\
				$(LIBFT_DIR)/ft_lstlast.c		\
				$(LIBFT_DIR)/ft_lstadd_back.c	\
				$(LIBFT_DIR)/ft_lstclear.c		\
				$(LIBFT_DIR)/ft_lstdelone.c		\
				$(LIBFT_DIR)/ft_lstiter.c		\
				$(LIBFT_DIR)/ft_lstmap.c		\
				$(LIBFT_DIR)/ft_lstnew_i.c		\
				$(LIBFT_DIR)/ft_strlen.c\
				$(LIBFT_DIR)/ft_strdup.c\
				$(LIBFT_DIR)/ft_strcmp.c\
				$(LIBFT_DIR)/ft_memset.c\
				$(LIBFT_DIR)/ft_bzero.c\
				$(LIBFT_DIR)/ft_memcpy.c\
				$(LIBFT_DIR)/ft_memccpy.c\
				$(LIBFT_DIR)/ft_memmove.c\
				$(LIBFT_DIR)/ft_memchr.c\
				$(LIBFT_DIR)/ft_memcmp.c\
				$(LIBFT_DIR)/ft_strcpy.c\
				$(LIBFT_DIR)/ft_strncpy.c\
				$(LIBFT_DIR)/ft_strcat.c\
				$(LIBFT_DIR)/ft_strchr.c\
				$(LIBFT_DIR)/ft_strrchr.c\
				$(LIBFT_DIR)/ft_strstr.c\
				$(LIBFT_DIR)/ft_strnstr.c\
				$(LIBFT_DIR)/ft_strncmp.c\
				$(LIBFT_DIR)/ft_atoi.c\
				$(LIBFT_DIR)/ft_isdigit.c\
				$(LIBFT_DIR)/ft_isalpha.c\
				$(LIBFT_DIR)/ft_isalnum.c\
				$(LIBFT_DIR)/ft_isascii.c\
				$(LIBFT_DIR)/ft_isprint.c\
				$(LIBFT_DIR)/ft_toupper.c\
				$(LIBFT_DIR)/ft_tolower.c\
				$(LIBFT_DIR)/ft_memdel.c\
				$(LIBFT_DIR)/ft_strnew.c\
				$(LIBFT_DIR)/ft_strdel.c\
				$(LIBFT_DIR)/ft_strclr.c\
				$(LIBFT_DIR)/ft_striter.c\
				$(LIBFT_DIR)/ft_striteri.c\
				$(LIBFT_DIR)/ft_strmapi.c\
				$(LIBFT_DIR)/ft_strequ.c\
				$(LIBFT_DIR)/ft_strnequ.c\
				$(LIBFT_DIR)/ft_strjoin.c\
				$(LIBFT_DIR)/ft_strtrim.c\
				$(LIBFT_DIR)/ft_putchar.c\
				$(LIBFT_DIR)/ft_putstr.c\
				$(LIBFT_DIR)/ft_putchar_fd.c\
				$(LIBFT_DIR)/ft_putstr_fd.c\
				$(LIBFT_DIR)/ft_putendl_fd.c\
				$(LIBFT_DIR)/ft_putnbr_fd.c\
				$(LIBFT_DIR)/ft_itoa.c\
				$(LIBFT_DIR)/ft_strlcat.c\
				$(LIBFT_DIR)/ft_strncat.c\
				$(LIBFT_DIR)/ft_lstnew.c\
				$(LIBFT_DIR)/ft_lstdelone.c\
				$(LIBFT_DIR)/ft_lstadd.c\
				$(LIBFT_DIR)/ft_lstiter.c\
				$(LIBFT_DIR)/ft_lstmap.c\
				$(LIBFT_DIR)/ft_isspace.c\
				$(LIBFT_DIR)/ft_isupper.c\
				$(LIBFT_DIR)/ft_swap.c\
				$(LIBFT_DIR)/ft_min.c\
				$(LIBFT_DIR)/ft_max.c\
				$(LIBFT_DIR)/ft_pathcmp.c\
				$(LIBFT_DIR)/ft_pow.c\
				$(LIBFT_DIR)/ft_abs.c\
				
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

GNL_FLS = $(GNL_DIR)/get_next_line.c\

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
	mkdir -p $(OBJ_DIR)/$(GNL_DIR)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all
