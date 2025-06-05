# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: micampil <micampil@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/17 18:38:24 by micampil          #+#    #+#              #
#    Updated: 2025/06/05 01:27:31 by micampil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Directories
SRC_DIR = srcs
INC_DIR = includes
OBJ_DIR = objs

# Files
FILES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c \
		ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_itoa.c ft_memchr.c ft_memcmp.c \
		ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
		ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c \
		ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
		ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
		ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
		ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
		ft_lstmap.c ft_lstnew.c ft_lstsize.c

# Source and object paths
SRCS = $(addprefix $(SRC_DIR)/, $(FILES))
BONUS_SRCS = $(addprefix $(SRC_DIR)/, $(BONUS))
OBJS = $(addprefix $(OBJ_DIR)/, $(FILES:.c=.o))
BONUS_OBJS = $(addprefix $(OBJ_DIR)/, $(BONUS:.c=.o))

# Library name and compiler settings
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: create_dirs $(NAME)

# Create necessary directories
create_dirs:
	@mkdir -p $(SRC_DIR)
	@mkdir -p $(INC_DIR)
	@mkdir -p $(OBJ_DIR)

$(NAME): $(OBJS)
	@echo "Compiling libft..."
	@ar rcs $(NAME) $(OBJS)
	@echo "✅ libft.a created successfully!"

# Compile .c files to .o files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

bonus: create_dirs $(OBJS) $(BONUS_OBJS)
	@echo "Compiling libft with bonus..."
	@ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
	@touch bonus
	@echo "✅ libft.a with bonus created successfully!"

clean:
	@echo "Cleaning up..."
	@$(RM) $(OBJS) $(BONUS_OBJS)
	@rm -rf $(OBJ_DIR)
	@echo "🧹 Object files cleaned!"

fclean: clean
	@echo "Removing libft.a..."
	@$(RM) $(NAME)
	@$(RM) bonus
	@echo "🧹 libft.a cleaned!"

re: fclean all

# Move current files to src directory
setup:
	@mkdir -p $(SRC_DIR) $(INC_DIR) $(OBJ_DIR)
	@if [ -f "libft.h" ]; then \
		mv libft.h $(INC_DIR)/; \
	fi
	@for file in *.c; do \
		if [ -f "$$file" ]; then \
			mv $$file $(SRC_DIR)/; \
		fi \
	done
	@echo "📁 Project structure setup complete!"

.PHONY: all clean fclean re bonus create_dirs setup
