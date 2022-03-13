NAME	:=	phonebook

SRCS	:=	PhoneBook.cpp \
			Contact.cpp \
			main.cpp

OBJS	:=	${SRCS:.cpp=.o}

CC		:=	g++

CFLAGS	:=	-Wall -Wextra -Werror -std=c++98

all:		${NAME}

${NAME}:	${OBJS}
		${CC} ${OBJS} -o ${NAME} ${CFLAGS}

clean:
		rm -f ${OBJS}

fclean:		clean
		rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re