################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
RTO_Friday.lss \

FLASH_IMAGE += \
RTO_Friday.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: RTO_Friday.elf secondary-outputs

# Tool invocations
RTO_Friday.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,RTO_Friday.map -mmcu=atmega32 -o "RTO_Friday.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

RTO_Friday.lss: RTO_Friday.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S RTO_Friday.elf  >"RTO_Friday.lss"
	@echo 'Finished building: $@'
	@echo ' '

RTO_Friday.hex: RTO_Friday.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex RTO_Friday.elf  "RTO_Friday.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: RTO_Friday.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 RTO_Friday.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) RTO_Friday.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
