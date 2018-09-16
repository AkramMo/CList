################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/tests/func_test1.c \
../src/tests/func_test2.c \
../src/tests/func_test3.c \
../src/tests/func_test4.c \
../src/tests/func_test5.c 

OBJS += \
./src/tests/func_test1.o \
./src/tests/func_test2.o \
./src/tests/func_test3.o \
./src/tests/func_test4.o \
./src/tests/func_test5.o 

C_DEPS += \
./src/tests/func_test1.d \
./src/tests/func_test2.d \
./src/tests/func_test3.d \
./src/tests/func_test4.d \
./src/tests/func_test5.d 


# Each subdirectory must supply rules for building sources it contributes
src/tests/%.o: ../src/tests/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -I/home/akmo/eclipse-workspace/LinkedList/src/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


