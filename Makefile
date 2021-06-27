NAME	= ft_display_file

RM 		= rm -rf

SRNAME 	= display_file.c

SRCS	= ${SRNAME}

OBJS 	=  ${NAME}

CFLAGS 	= -Wall -Wextra -Werror

CC:
		gcc ${CFLAGS} ${SRNAME}
	   	mv a.out ${NAME}

all:	${NAME}

clean:	
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

.PHONY : all clean fclean
