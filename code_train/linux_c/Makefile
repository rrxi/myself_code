foo = $(bar)
bar = Huh?

all:
	@echo $(foo)

x := foo
y := $(x) bar
install:
	@echo "-$(y)-"

objects = main.o
objects += $(boo)
boo = foo.o bar.o
B:
	@echo $(objects)
