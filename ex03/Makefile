# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/24 17:27:29 by hshimizu          #+#    #+#              #
#    Updated: 2024/03/27 13:51:37 by hshimizu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Violence

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror
CXXFLAGS	+= -std=c++98 -pedantic

SRCS		= main.cpp
SRCS		+= Weapon.cpp
SRCS		+= HumanA.cpp
SRCS		+= HumanB.cpp

$(NAME): $(SRCS)
	$(CXX) $(CXXFLAGS) $^ -o $@

.PHONY: clean
clean: $(NAME)
	rm -f $^
