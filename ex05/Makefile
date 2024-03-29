# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/24 17:27:29 by hshimizu          #+#    #+#              #
#    Updated: 2024/03/28 04:21:39 by hshimizu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Harl

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -g
CXXFLAGS	+= -std=c++98 -pedantic


SRCS		= main.cpp
SRCS		+= Harl.cpp

$(NAME): $(SRCS)
	$(CXX) $(CXXFLAGS) $^ -o $@

.PHONY: clean
clean: $(NAME)
	rm -f $^
