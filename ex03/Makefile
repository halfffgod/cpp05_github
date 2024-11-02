NAME		= Bureaucrat
SRC			= Bureaucrat.cpp main.cpp AForm.cpp PresidentialPardonForm.cpp \
					RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp
OBJ			= Bureaucrat.o main.o AForm.o PresidentialPardonForm.o \
					RobotomyRequestForm.o ShrubberyCreationForm.o Intern.o
CC			= g++
FLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -f
all:		$(NAME)

.cpp.o:
			@$(CC) $(FLAGS) -o $@ -c $<

$(NAME):	$(OBJ)
			@$(CC) $(FLAGS) -o $(NAME) $(OBJ)
			@echo "$(NAME) is compiled!"

clean:
			@$(RM) $(OBJ)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re