# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/24 17:27:29 by hshimizu          #+#    #+#              #
#    Updated: 2024/03/30 06:42:56 by hshimizu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= HarlFilter

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
