SRC_DIR = ./src
OUT_DIR = ./build
OBJ_DIR = $(OUT_DIR)/obj
BIN_DIR = $(OUT_DIR)/bin
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o,$(SRC_FILES))


$(OUT_DIR):
	mkdir $(OUT_DIR)

$(OBJ_DIR) : $(OUT_DIR)
	mkdir $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(OBJ_DIR)
	gcc -c $< -o $@

all:
	echo $(SRC_FILES)
	echo $(OBJ_FILES)

clean: $(OUT_DIR)
	rm $(OUT_DIR)