NAME : libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror 
SOURCES =  
OBJECTS = $(SOURCES:.c=.o)

all : $(NAME)
$(NAME) : $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

clean :
	rm -f $(OBJECTS)
fclean : clean
	rm -f $(NAME )
re : fclean all
