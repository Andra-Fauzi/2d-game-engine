SRC_DIR = src
OBJ_DIR = obj

CC = g++
FLAGS = -lsfml-graphics -lsfml-window -lsfml-system


SOURCES = $(shell find $(SRC_DIR) -name '*.cpp')
OBJECTS = $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SOURCES))

EXEC = output/app

all: $(EXEC)

$(EXEC): $(OBJECTS)
	$(CC) -o $@ $^ $(FLAGS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	$(CC) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR) $(EXEC)

