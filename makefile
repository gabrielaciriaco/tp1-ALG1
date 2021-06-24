CC = g++
CXXFLAGS = -g -Wall

INCLUDE_FOLDER = ./include/
BIN_FOLDER = ./
OBJ_FOLDER = ./obj/
SRC_FOLDER = ./src/
TMPOUT = .testresult

MAIN = Main
TARGET = TP1-ALG1
SRC = $(wildcard $(SRC_FOLDER)*.cpp)
OBJ = $(patsubst $(SRC_FOLDER)%.cpp, $(OBJ_FOLDER)%.o, $(SRC))

$(OBJ_FOLDER)%.o: $(SRC_FOLDER)%.cpp
		@mkdir -p $(OBJ_FOLDER)
		$(CC) $(CXXFLAGS) -c $< -o $@ -I$(INCLUDE_FOLDER)

all: $(OBJ)
		$(CC) $(CXXFLAGS) -o $(BIN_FOLDER)$(TARGET) $(OBJ)

test: $(TARGET)
		@bash run_tests.sh $(BIN_FOLDER)$(TARGET) $(TMPOUT)

clean:
		@rm -rf $(OBJ_FOLDER) $(BIN_FOLDER)$(TARGET)