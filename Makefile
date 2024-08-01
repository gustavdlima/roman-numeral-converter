NAME			= romanConverter

CC				= gcc
CFLAGS			= -g3 -Wall -Wextra -Werror
RM				= rm -f

INCLUDES_DIR	= includes
INCLUDES		= $(addprefix -I,$(INCLUDES_DIR))

SRC_DIR			= ./src
OBJ_DIR	 		= ./build

SRCS	=	roman_converter.c	\

OBJS	:= $(addprefix $(OBJ_DIR)/,$(SRCS:.c=.o))
SRCS	:= $(addprefix $(SRC_DIR)/,$(SRCS))

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(INCLUDES)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) -r $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
