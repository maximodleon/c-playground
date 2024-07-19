OBJECTS=bin/structs bin/write_file
# TARGET = bin/final
SRC = $(wildcard src/*.c)
OBJ = $(patsubst src/%.c, obj/%.o, $(SRC))

default: $(OBJECTS)

clean:
	  rm -f obj/*.o
	  rm -f bin/*

$(OBJECTS): $(OBJ)
	  gcc $< -o $@

obj/%.o: src/%.c
	 gcc -c $< -o $@ -Iinclude
