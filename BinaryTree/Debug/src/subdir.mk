################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/BinaryTree.cpp \
../src/BinaryTreeUsingArray.cpp \
../src/Node.cpp \
../src/Queue.cpp \
../src/Run.cpp 

OBJS += \
./src/BinaryTree.o \
./src/BinaryTreeUsingArray.o \
./src/Node.o \
./src/Queue.o \
./src/Run.o 

CPP_DEPS += \
./src/BinaryTree.d \
./src/BinaryTreeUsingArray.d \
./src/Node.d \
./src/Queue.d \
./src/Run.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


