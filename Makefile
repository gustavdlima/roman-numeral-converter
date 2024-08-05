NAME            = romanConverter

# Compiler configuration
CC              = g++
CFLAGS          = -g3 -Wall -Wextra -Werror
RM              = rm -f

# Header Directories
INCLUDES_DIR    = includes
INCLUDES        = $(addprefix -I,$(INCLUDES_DIR))

# Source Directories
SRC_DIR         = ./src
OBJ_DIR         = ./build
TEST_DIR        = ./tests/unit
SRCS            = main.c validations.c convert.c utils.c cli.c
TEST_SRCS       = test_convert.cpp test_validations.cpp test_utils.cpp

# Main program compilation
OBJS            := $(addprefix $(OBJ_DIR)/,$(SRCS:.c=.o))
SRCS            := $(addprefix $(SRC_DIR)/,$(SRCS))

# Test files compilation and linking
TEST_OBJS       := $(addprefix $(OBJ_DIR)/,$(TEST_SRCS:.cpp=.o))
TEST_SRCS       := $(addprefix $(TEST_DIR)/,$(TEST_SRCS))
TEST_OBJS_NO_MAIN = $(filter-out $(OBJ_DIR)/main.o, $(OBJS))

# Google Test configuration
GTEST_DIR       = ./googletest
GTEST_LIB       = $(GTEST_DIR)/build/lib/libgtest.a $(GTEST_DIR)/build/lib/libgtest_main.a
GTEST_INC       = -I$(GTEST_DIR)/googletest/include

all: $(NAME)

# Rule to compile the main program
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(INCLUDES)

# Rule to compile the .c files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# Rule to compile the test files
$(OBJ_DIR)/%.o: $(TEST_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(GTEST_INC) $(INCLUDES) -c $< -o $@

# Rule to compile the test program and link with
test: $(TEST_OBJS_NO_MAIN) $(TEST_OBJS)
	$(CC) $(CFLAGS) -o test $(TEST_OBJS_NO_MAIN) $(TEST_OBJS) $(GTEST_LIB) $(INCLUDES) $(GTEST_INC)
	./test

# Rule to clean the object files
clean:
	$(RM) -r $(OBJ_DIR)

# Rule to clean the object files and the executable
fclean: clean
	$(RM) $(NAME) test

# Rule to recompile the program
re: fclean all

# Run main program
run: all
	clear
	./$(NAME)

.PHONY: all clean fclean re test
