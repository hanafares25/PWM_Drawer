################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Source/02_ECUA/01-LCD/Src/LCD.c 

OBJS += \
./Source/02_ECUA/01-LCD/Src/LCD.o 

C_DEPS += \
./Source/02_ECUA/01-LCD/Src/LCD.d 


# Each subdirectory must supply rules for building sources it contributes
Source/02_ECUA/01-LCD/Src/LCD.o: ../Source/02_ECUA/01-LCD/Src/LCD.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"C:\Users\hanaf\OneDrive - eng.cu.edu.eg\Desktop\Fall 2022\AMIT_Graduation_Project\PWM\PWM\Source\04_APP" -I"C:\Users\hanaf\OneDrive - eng.cu.edu.eg\Desktop\Fall 2022\AMIT_Graduation_Project\PWM\PWM\Source\01_MCAL\03-TIMER0\Inc" -I"C:\Users\hanaf\OneDrive - eng.cu.edu.eg\Desktop\Fall 2022\AMIT_Graduation_Project\PWM\PWM\Source\00_Library" -I"C:\Users\hanaf\OneDrive - eng.cu.edu.eg\Desktop\Fall 2022\AMIT_Graduation_Project\PWM\PWM\Source\01_MCAL\01-DIO\Inc" -I"C:\Users\hanaf\OneDrive - eng.cu.edu.eg\Desktop\Fall 2022\AMIT_Graduation_Project\PWM\PWM\Source\01_MCAL\02-EXINT\Inc" -I"C:\Users\hanaf\OneDrive - eng.cu.edu.eg\Desktop\Fall 2022\AMIT_Graduation_Project\PWM\PWM\Source\02_ECUA\01-LCD\Inc" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"Source/02_ECUA/01-LCD/Src/LCD.d" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


