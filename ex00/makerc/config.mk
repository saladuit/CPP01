# **************************************************************************** #
#                                                                              #
#                                                     .--.  _                  #
#    config.mk                                       |o_o || |                 #
#                                                    |:_/ || |_ _   ___  __    #
#    By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /    #
#                                                  (|     | )|_| |_| |>  <     #
#    Created: 2022/07/16 21:50:54 by safoh        /'\_   _/`\__|\__,_/_/\_\    #
#    Updated: 2022/09/18 15:24:10 by safoh        \___)=(___/                  #
#                                                                              #
# **************************************************************************** #


SRCS			=Account.cpp
MAIN 			:=tests.cpp

SRC_DIR			:=src
INCLUDE_DIR		:=include
BUILD_DIR		:=build
LIB_DIR			:=libs


OBJS			=$(addprefix $(BUILD_DIR)/, $(SRCS:%.cpp=%.o))
MAIN_OBJ		=$(addprefix $(BUILD_DIR)/, $(MAIN:%.cpp=%.o))

HEADERS			=$(INCLUDE_DIR)/account.hpp

INCLUDE_FLAGS	:=$(addprefix -I, $(sort $(dir $(HEADERS))))
