################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
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
Buzzer_tunes.lss \

FLASH_IMAGE += \
Buzzer_tunes.hex \

EEPROM_IMAGE += \
Buzzer_tunes.eep \

SIZEDUMMY += \
sizedummy \


# All Target
all: Buzzer_tunes.elf secondary-outputs

# Tool invocations
Buzzer_tunes.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Buzzer_tunes.map -mmcu=atmega32 -o "Buzzer_tunes.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Buzzer_tunes.lss: Buzzer_tunes.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Buzzer_tunes.elf  >"Buzzer_tunes.lss"
	@echo 'Finished building: $@'
	@echo ' '

Buzzer_tunes.hex: Buzzer_tunes.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Buzzer_tunes.elf  "Buzzer_tunes.hex"
	@echo 'Finished building: $@'
	@echo ' '

Buzzer_tunes.eep: Buzzer_tunes.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex Buzzer_tunes.elf  "Buzzer_tunes.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Buzzer_tunes.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 Buzzer_tunes.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(EEPROM_IMAGE)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Buzzer_tunes.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
