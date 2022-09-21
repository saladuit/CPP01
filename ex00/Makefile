# **************************************************************************** #
#                                                                              #
#                                                     .--.  _                  #
#    Makefile                                        |o_o || |                 #
#                                                    |:_/ || |_ _   ___  __    #
#    By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /    #
#                                                  (|     | )|_| |_| |>  <     #
#    Created: 2022/07/07 17:49:38 by safoh        /'\_   _/`\__|\__,_/_/\_\    #
#    Updated: 2022/09/18 20:28:06 by safoh        \___)=(___/                  #
#                                                                              #
# **************************************************************************** #

include makerc/colours.mk
include makerc/config.mk

################################################################################

NAME			:=account.out

CC				:=c++
RM				:=rm -rfv
CFLAGS			=-Wall -Wextra -Werror -std=c++98$(if $(FSAN), -g -fsanitize=address)$(if $(DEBUG), -g)

################################################################################
all: $(NAME)

$(NAME): SHELL :=/bin/bash

$(NAME): $(OBJS) $(MAIN_OBJ)
	$(CC) $(CFLAGS) $^ $(INCLUDE_FLAGS) -o $(NAME)
	@printf "$(GREEN_FG)$(NAME)$(RESET_COLOR) created\n"

$(MAIN_OBJ) $(OBJS): $(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp | $(HEADER)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDE_FLAGS) -c $< -o $@

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

################################################################################

clean:
	@$(RM) $(OBJS) $(MAIN_OBJ)

fclean: clean
	@$(RM) $(NAME) $(BUILD_DIR)

re: fclean
	@$(MAKE)

debug:
	@$(MAKE) DEBUG=1

rebug: fclean
	@$(MAKE) debug

fsan:
	@$(MAKE) FSAN=1

resan: fclean
	@$(MAKE) fsan

bonus: all

.PHONY: all clean fclean re debug rebug fsan resan

################################################################################
