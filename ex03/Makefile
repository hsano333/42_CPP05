NAME	:= At_least_this_beats_coffee_making
LIB	:= ./lib/
OBJDIR	:= ./obj
SRCDIR	:= ./srcs/
SRC	:=  main.cpp Bureaucrat.cpp GradeTooHighException.cpp GradeTooLowException.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp NotSignedException.cpp Intern.cpp NoFormException.cpp
ENTRY	:= 

INCS	:= ./include
IFLAGS	:= $(addprefix -I,$(INCS))
SRCS	:= $(addprefix $(SRCDIR), $(SRC))
OBJS	:= $(SRCS:.cpp=.o)
OBJECTS	:= $(addprefix $(OBJDIR)/, $(SRC:.cpp=.o))
DEPS	:= $(OBJECTS:.o=.d)

CXX			:= c++
CXXFLAGS	:= -Wall -Wextra -Werror -std=c++98

all:
	@make $(NAME)	

$(NAME)	:	$(OBJECTS)
		$(CXX)  $(CXXFLAGS) $(OBJECTS) -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR) / $(*D)
	$(CXX) $(CXXFLAGS) $(IFLAGS) -c $< -MMD -MP -MF $(OBJDIR)/$*.d  -o $@

clean	:
			$(RM) $(OBJECTS)
			$(RM) $(DEPS)

fclean	:	clean
			$(RM) $(NAME)

re	:		fclean all

bonus	:	
			@make WITH_BONUS=1

ifeq ($(findstring clean,$(MAKECMDGOALS)),)
-include $(DEPS)
endif

.PHONY: all clean fclean bonus re

