################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../tests/func_test1.c \
../tests/func_test2.c \
../tests/func_test3.c \
../tests/func_test4.c \
../tests/func_test5.c 

OBJS += \
./tests/func_test1.o \
./tests/func_test2.o \
./tests/func_test3.o \
./tests/func_test4.o \
./tests/func_test5.o 

C_DEPS += \
./tests/func_test1.d \
./tests/func_test2.d \
./tests/func_test3.d \
./tests/func_test4.d \
./tests/func_test5.d 


# Each subdirectory must supply rules for building sources it contributes
tests/%.o: ../tests/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -I/home/akmo/eclipse-workspace/LinkedList/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


