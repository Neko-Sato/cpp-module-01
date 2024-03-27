# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/24 17:27:29 by hshimizu          #+#    #+#              #
#    Updated: 2024/03/27 03:07:58 by hshimizu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Brain

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror
CXXFLAGS	+= -std=c++98 -pedantic

SRCS		= main.cpp

$(NAME): $(SRCS)
	$(CXX) $(CXXFLAGS) $^ -o $@

.PHONY: clean
clean: $(NAME)
	rm -f $^
