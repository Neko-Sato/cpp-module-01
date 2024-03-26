# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/24 17:27:29 by hshimizu          #+#    #+#              #
#    Updated: 2024/03/27 02:16:17 by hshimizu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Zombie

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror
CXXFLAGS	+= -std=c++98 -pedantic

SRCS		= main.cpp
SRCS		+= Zombie.cpp
SRCS		+= newZombie.cpp
SRCS		+= randomChump.cpp

$(NAME): $(SRCS)
	$(CXX) $(CXXFLAGS) $^ -o $@
