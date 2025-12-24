CC = g++
CFLAGS = -Wall -g
SRC_DIR = src
BIN_DIR = bin

SRCS = $(wildcard $(SRC_DIR)/*.cpp)
TARGETS = $(patsubst $(SRC_DIR)/%.cpp, %, $(SRCS))

.PHONY: all clean $(TARGETS)

all: $(TARGETS)

$(TARGETS):
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) $(SRC_DIR)/$@.cpp -o $(BIN_DIR)/$@
	@echo "Running $@ ...\n"
	@./$(BIN_DIR)/$@

clean:
	rm -f $(BIN_DIR)/*
