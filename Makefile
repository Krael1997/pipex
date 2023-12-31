# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelrodr <abelrodr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/19 15:37:40 by abelrodr          #+#    #+#              #
#    Updated: 2023/09/13 11:57:28 by abelrodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME_BONUS = checker
CC = gcc
CFLAGS = -Wall -Werror -Wextra
UNAME = $(shell uname)
INC = -I $(INC_DIR) -I $(LIBFT_DIR)/inc
LIBFT = $(LIBFT_DIR)/libft.a
RM = rm -rf

#########################  Sources  ###########################################
SRC_MAIN = $(SRC_DIR)/push_swap/main.c

######################### Directories  #################################
OBJ_PATH = obj
SRC_PATH = src
INC_PATH = inc
LIBFT_PATH = libft
BONUS_PATH = bonus

#########################  Colors  ############################################
R = \033[31;1m
G = \033[32;1m
C = \033[36;1m
Y = \033[33;1m
END = \033[0m

#########################  Args  ###############################################
all: banner libft $(NAME)

bonus: banner libft $(NAME_BONUS)

libft:
	@make -C $(LIBFT_PATH)

clean:
	$(RM) $(OBJ_PATH)
	make clean -C $(LIBFT_PATH)
	@echo "\n$(Y)[Cleaned $(C) '$(NAME) objects' $(Y)successfully 🧹 ✅]\n$(END)"

fclean: clean
	make fclean -C $(LIBFT_PATH)
	$(RM) pipex pipex_bonus
	@echo "$(R)[Removed $(C)'$(NAME)' $(R)successfully 🔥 ✅]\n$(END)"

re: fclean all

rebonus: fclean bonus

#########################  Rules  #############################################
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(LIBFT_PATH)/$(OBJ_PATH)/*
	@echo "\n$(G)[Compiled $(C) $@ $(G)successfully 🛠  ✅]\n$(END)"

$(NAME_BONUS): $(OBJS_BONUS)
	$(CC) $(CFLAGS) -o $@ $(OBJS_BONUS) $(LIBFT_PATH)/$(OBJ_PATH)/*
	@echo "\n$(G)[Compiled $(C) $@ $(G)successfully 🛠  ✅]\n$(END)"

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c $(INC_PATH)/pipex.h
	mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) -I $(INC_PATH) -c $< -o $@

$(OBJ_PATH)/%.o: $(BONUS_PATH)/%.c $(INC_PATH)/pipex_bonus.h
	mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) -I $(INC_PATH) -c $< -o $@

.PHONY: all bonus libft clean fclean re rebonus

BANNER := "By Abel Rodriguez"

define print_banner
@echo "\n$(C)#####  # #####  ###### #    # "
@echo "#    # # #    # #       #  #  "
@echo "#    # # #    # #####    ##   "
@echo "#####  # #####  #        ##   "
@echo "#      # #      #       #  #  "
@echo "#      # #      ###### #    # "
@echo "\n$(C)$(BANNER)$(END)\n"
endef

banner:
	$(call print_banner)