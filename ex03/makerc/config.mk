# **************************************************************************** #
#                                                                              #
#                                                     .--.  _                  #
#    config.mk                                       |o_o || |                 #
#                                                    |:_/ || |_ _   ___  __    #
#    By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /    #
#                                                  (|     | )|_| |_| |>  <     #
#    Created: 2022/07/16 21:50:54 by safoh        /'\_   _/`\__|\__,_/_/\_\    #
#    Updated: 2022/09/22 20:08:00 by safoh        \___)=(___/                  #
#                                                                              #
# **************************************************************************** #

CC				:=c++
RM				:=rm -rfv
CFLAGS			=-Wall -Wextra -Werror -std=c++98$(if $(FSAN), -g -fsanitize=address)$(if $(DEBUG), -g)
SRCS			=Weapon.cpp HumanA.cpp HumanB.cpp
MAIN 			:=main.cpp

SRC_DIR			:=src
INCLUDE_DIR		:=include
BUILD_DIR		:=build
LIB_DIR			:=libs


OBJS			=$(addprefix $(BUILD_DIR)/, $(SRCS:%.cpp=%.o))
MAIN_OBJ		=$(addprefix $(BUILD_DIR)/, $(MAIN:%.cpp=%.o))

HEADERS			=$(INCLUDE_DIR)/Weapon.hpp $(INCLUDE_DIR)/HumanA.hpp \
				 $(INCLUDE_DIR)/HumanB.hpp

INCLUDE_FLAGS	:=$(addprefix -I, $(sort $(dir $(HEADERS))))
