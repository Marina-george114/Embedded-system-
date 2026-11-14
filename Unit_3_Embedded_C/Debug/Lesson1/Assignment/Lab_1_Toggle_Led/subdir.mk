################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Lesson1/Assignment/Lab_1_Toggle_Led/Led_Toggling.c 

OBJS += \
./Lesson1/Assignment/Lab_1_Toggle_Led/Led_Toggling.o 

C_DEPS += \
./Lesson1/Assignment/Lab_1_Toggle_Led/Led_Toggling.d 


# Each subdirectory must supply rules for building sources it contributes
Lesson1/Assignment/Lab_1_Toggle_Led/%.o: ../Lesson1/Assignment/Lab_1_Toggle_Led/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


