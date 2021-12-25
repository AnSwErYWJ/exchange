VPATH ?= .

#
# build target
#
EXECUTABLE = exchange
TARGET = $(EXECUTABLE)

#
# toolchains
#
CC  	:= gcc
LD  	:= ld
CPP 	:= cpp
CXX 	:= g++
AR  	:= ar
AS  	:= as
NM  	:= nm
STRIP 	:= strip
OBJCOPY := objcopy
RM 		:= -rm -rf

#
# files or dirs
#
SRC_FILES :=
SRC_FILES_EXCLUDE :=
SRC_DIRS := src src/modules/merge src/modules/split src/modules/wave
SRC_DIRS_EXCLUDE :=
INCLUDE_DIRS := -Iinclude -Iinclude/modules/merge -Iinclude/modules/split -Iinclude/modules/wave

#
# flags
#
CFLAGS   := -Os -std=gnu99 -fvisibility=hidden -D_GNU_SOURCE -fPIC -fPIE
CFLAGS   += -Wall -Wno-variadic-macros -Wno-format-zero-length -fstack-protector-all -ffunction-sections -fdata-sections
CFLAGS   +=  $(INCLUDE_DIRS)
CXXFLAGS := $(subst -std=gnu99,,$(CFLAGS))
LDFLAGS  := -Wl,--gc-sections -pie

#
# rules
#
%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

%.o : %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

#
# objects
#
ifneq ($(SRC_DIRS),)
    SRC_FILES += $(shell find $(SRC_DIRS) -name "*.c" -or -name "*.cpp" -or -name "*.cc")
endif
ifneq ($(SRC_DIRS_EXCLUDE),)
    SRC_FILES_EXCLUDE += $(shell find $(SRC_DIRS_EXCLUDE) -name "*.c" -or -name "*.cpp" -or -name "*.cc")
endif
SRC_FILES  := $(filter-out $(SRC_FILES_EXCLUDE), $(SRC_FILES))

OBJECTS = $(subst .c,.o,$(subst .cpp,.o,$(subst .cc,.o,$(SRC_FILES))))

#
# goal all
#
.PHONY: all
all: $(TARGET)

$(EXECUTABLE) : $(OBJECTS)
	$(CXX) $^ $(LDFLAGS) -o $@

#
# goal: clean
#
.PHONY: clean 
clean:
	$(RM) $(TARGET) $(OBJECTS)