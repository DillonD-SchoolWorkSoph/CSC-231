################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Exercise\ 2/source.cpp 

OBJS += \
./Exercise\ 2/source.o 

CPP_DEPS += \
./Exercise\ 2/source.d 


# Each subdirectory must supply rules for building sources it contributes
Exercise\ 2/source.o: ../Exercise\ 2/source.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"Exercise 2/source.d" -MT"Exercise\ 2/source.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


