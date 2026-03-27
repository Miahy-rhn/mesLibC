defaut : $(BUILD)/messStacker
SRC = ./src
BUILD = build
LIB = libmessStacker.a
TEST_DIR = ./test
MESLIB = ./mesLib

CC = gcc
CFLAGS = -I$(SRC) -I$(MESLIB) -Wall -Wextra -g
AR = ar
ARFLAGS = rcs

all: $(BUILD)/$(LIB)

$(BUILD)/$(LIB): $(SRC)/messStacker.o
	$(AR) $(ARFLAGS) $@ $^

$(SRC)/messStacker.o: $(SRC)/messStacker.c $(SRC)/messStacker.h $(MESLIB)/mess_stacker_version.h
	$(CC) $(CFLAGS) -c $< -o $@

test: $(BUILD)/$(LIB) $(TEST_DIR)/test_version.c
	$(CC) $(CFLAGS) -o $(BUILD)/test_version $(TEST_DIR)/test_version.c -L$(BUILD) -l:libmessStacker.a

clean:
	rm -f $(SRC)/*.o $(BUILD)/*.a $(BUILD)/test_version