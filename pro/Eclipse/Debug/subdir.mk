################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
/home/robo/workspace/Threads/src/Conv.cpp \
/home/robo/workspace/Threads/src/Log.cpp \
/home/robo/workspace/Threads/src/Mutex.cpp \
/home/robo/workspace/Threads/src/Thread.cpp \
/home/robo/workspace/Threads/src/Time.cpp \
/home/robo/workspace/Threads/src/main.cpp 

OBJS += \
./Conv.o \
./Log.o \
./Mutex.o \
./Thread.o \
./Time.o \
./main.o 

CPP_DEPS += \
./Conv.d \
./Log.d \
./Mutex.d \
./Thread.d \
./Time.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
Conv.o: /home/robo/workspace/Threads/src/Conv.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Log.o: /home/robo/workspace/Threads/src/Log.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Mutex.o: /home/robo/workspace/Threads/src/Mutex.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Thread.o: /home/robo/workspace/Threads/src/Thread.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Time.o: /home/robo/workspace/Threads/src/Time.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

main.o: /home/robo/workspace/Threads/src/main.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


