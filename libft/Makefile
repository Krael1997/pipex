# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelrodr <abelrodr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/04 18:24:16 by abelrodr          #+#    #+#              #
#    Updated: 2023/09/04 19:39:23 by abelrodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
RM = rm -rf

# Search for all .c files in the src directory
SRCS = $(wildcard $(SRC_DIR)/*.c)

# Create a list of .o files from the list of .c files
OBJS = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))

################### DIRECTORYS(PATHS) ###################
OBJ_DIR = OBJ
SRC_DIR = SRC
INC_DIR = INC

################### RULES ###################
$(NAME): $(OBJS)
	$(AR) $@ $(OBJS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INC_DIR)/libft.h
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

all: $(NAME)

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re