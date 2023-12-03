CC=cc
CFLAGS=-Wall
PROGRAM?=part-01

all: $(PROGRAM)

$(PROGRAM): $(PROGRAM).c
	@$(CC) $(CFLAGS) -o $(PROGRAM) $(PROGRAM).c
	@echo "––––––––––––––––$(PROGRAM)––––––––––––––––"
	@./$(PROGRAM)
	@echo "––––––––––––––––––––––––––––––––––––––––––"
	
clean:
	@rm -f $(PROGRAM)
