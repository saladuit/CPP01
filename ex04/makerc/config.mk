# **************************************************************************** #
#                                                                              #
#                                                     .--.  _                  #
#    config.mk                                       |o_o || |                 #
#                                                    |:_/ || |_ _   ___  __    #
#    By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /    #
#                                                  (|     | )|_| |_| |>  <     #
#    Created: 2022/07/16 21:50:54 by safoh        /'\_   _/`\__|\__,_/_/\_\    #
#    Updated: 2022/09/24 21:13:30 by saladuit     \___)=(___/                  #
#                                                                              #
# **************************************************************************** #

CC				:=c++
RM				:=rm -rfv
CFLAGS			=-Wall -Wextra -Werror -std=c++11$(if $(FSAN), -g -fsanitize=address)$(if $(DEBUG), -g)
SRCS			=replace.cpp
MAIN 			:=main.cpp

SRC_DIR			:=src
INCLUDE_DIR		:=include
BUILD_DIR		:=build
LIB_DIR			:=libs


OBJS			=$(addprefix $(BUILD_DIR)/, $(SRCS:%.cpp=%.o))
MAIN_OBJ		=$(addprefix $(BUILD_DIR)/, $(MAIN:%.cpp=%.o))

HEADERS			=$(INCLUDE_DIR)/replace.hpp

INCLUDE_FLAGS	:=$(addprefix -I, $(sort $(dir $(HEADERS))))
