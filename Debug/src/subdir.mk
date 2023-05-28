################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/DIO_program.c \
../src/GI_program.c \
../src/LED_program.c \
../src/RTO_Program.c \
../src/TIMER0_program.c \
../src/app.c 

OBJS += \
./src/DIO_program.o \
./src/GI_program.o \
./src/LED_program.o \
./src/RTO_Program.o \
./src/TIMER0_program.o \
./src/app.o 

C_DEPS += \
./src/DIO_program.d \
./src/GI_program.d \
./src/LED_program.d \
./src/RTO_Program.d \
./src/TIMER0_program.d \
./src/app.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


