# ENCODER-DECODER (ED) MAKEFILE #

ifeq ($(OS),Windows_NT)

delete = del
omain = ed.exe

else

delete = rm
omain = ed

endif

cc = g++

util = src/util.cpp
file = src/file.cpp
config = src/config.cpp
parser = src/parser.cpp

lib = $(util) $(file) $(config) $(parser)
main = src/main.cpp

.PHONY: run clean

run:
	$(cc) $(main) $(lib) -o $(omain)

clean: $(omain)
	$(delete) $(omain)

# MADE BY @hanilr #