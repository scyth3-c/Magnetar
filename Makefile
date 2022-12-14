DIR_BIN := .
TARGET := $(DIR_BIN)/Magnetar

# git submodule init
# git submodule update 
# before compile
# you can select the branch of magnetar-core, you just go into the folder

SOURCE_DIR := ./test-examples

DIR_TEMP := ./temp
DIR_OBJ := $(DIR_TEMP)/objects

COMPILER := g++
FLAGS = -std=c++17  -pthread 


OBJ := $(DIR_OBJ)/main.o 

$(TARGET) : $(OBJ)
	@mkdir -p $(DIR_BIN)
	@$(COMPILER) $(OBJ) $(FLAGS) -o $(TARGET)


$(DIR_OBJ)/%.o : $(SOURCE_DIR)/%.cpp 
	@mkdir -p $(DIR_OBJ)
	@$(COMPILER) -c -MD $(FLAGS) $< -o $@
-include $(DIR_OBJ)/*.d


.PHONY: clean
clean:
	@rm -rf $(DIR_OBJ) $(TARGET)
