# Compiler and Compilation Flags
CC = gcc
CFLAGS = -Wall -Werror -g

# Executable Name
EXECUTABLE = gp

# Source Files and Object Files
SRC = gp.c
OBJ = $(SRC:.c=.o)

# Targets
.PHONY: all
all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f $(EXECUTABLE) $(OBJ)

.PHONY: install
install: all
	cp $(EXECUTABLE) /usr/local/bin/$(EXECUTABLE)

.PHONY: uninstall
uninstall:
	rm -f /usr/local/bin/$(EXECUTABLE)
