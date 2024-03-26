# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/24 17:27:29 by hshimizu          #+#    #+#              #
#    Updated: 2024/03/27 02:54:57 by hshimizu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= zombieHorde

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror
CXXFLAGS	+= -std=c++98 -pedantic

SRCS		= main.cpp
SRCS		+= Zombie.cpp
SRCS		+= zombieHorde.cpp

$(NAME): $(SRCS)
	$(CXX) $(CXXFLAGS) $^ -o $@
