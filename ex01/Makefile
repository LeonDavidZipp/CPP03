# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/03 09:34:57 by lzipp             #+#    #+#              #
#    Updated: 2024/04/03 22:32:55 by lzipp            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := ex01Test

CPP := c++
CPPFLAGS := -Wextra -Wall -Werror -std=c++98

SRCDIR := ./src
SOURCES := $(addprefix $(SRCDIR)/, main.cpp ClapTrap.cpp ScavTrap.cpp)
OBJDIR = ./obj
OBJECTS := $(addprefix $(OBJDIR)/, $(notdir $(SOURCES:.cpp=.o)))

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CPP) $(CPPFLAGS) $(OBJECTS) -o $(NAME)

clean:
	rm -rf $(OBJDIR)
	
fclean: clean
	rm -f $(NAME)

re: fclean all

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	mkdir -p $(OBJDIR)
	$(CPP) $(CPPFLAGS) -c $< -o $@

.PHONY: all clean fclean re
