################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../source.cpp 

OBJS += \
./source.o 

CPP_DEPS += \
./source.d 


# Each subdirectory must supply rules for building sources it contributes
source.o: ../source.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++1y -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"source.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


