#Target : Dependancies
#<TAB>commands
PROJ_NAME = Calculator
SRC = src/main.c\
src/operations.c\

TEST_SRC=src/operations.c\
src/test_calculator.c\
Unity/unity.c\


ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
    ifeq ($(shell uname), Linux)
	   RM = rm -rf
	   FixPath = $1
	   EXEC = out
    endif
endif	

	  	

INC=-Iinc\
-IUnity\

Build: 
	gcc $(SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm
run:Build 
	./$(call FixPath,$(PROJ_NAME).$(EXEC))	


Build_test: 
	gcc $(TEST_SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm
test:Build_test
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

dynamic_analysis: Build
	valgrind ./$(call FixPath,$(PROJ_NAME).$(EXEC))
Clean:
	rm -rf *.o *.out *.i *.s




	
