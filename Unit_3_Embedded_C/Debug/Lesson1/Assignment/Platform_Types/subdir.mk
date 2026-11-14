################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Lesson1/Assignment/Platform_Types/TEST.c 

OBJS += \
./Lesson1/Assignment/Platform_Types/TEST.o 

C_DEPS += \
./Lesson1/Assignment/Platform_Types/TEST.d 


# Each subdirectory must supply rules for building sources it contributes
Lesson1/Assignment/Platform_Types/%.o: ../Lesson1/Assignment/Platform_Types/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


