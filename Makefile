CC=g++
CFLAGS=-Wall
.SUFFIXES = .cpp
BASE:=$(shell dirname $(realpath $(firstword $(MAKEFILE_LIST))))
objs:=$(wildcard */*.cpp)
targets:=$(objs:.cpp= )

.PHONY:all
all: $(targets)
.cpp:
	$(eval DIR := $(shell echo $@ | grep -o '.*/'))
	@mkdir -p $(BASE)/bin/$(DIR)
	$(CC) $(CFLAGS) -std=c++17 -o $(BASE)/bin/$@ $<
