DEP_EXT := d
SRC_EXT := cpp

#--COMPILER--

CC := g++

#****START OF USER DATA****

PJSIP := ~/Documents/Libaries/pjproject
include $(PJSIP)/build.mak

#****END OF USER DATA****

#****STRAT OF FLAGS****

#---WARNING FLAGS---

WFLAGS :=

#---COMPILER FLAGS---

CFLAGS := -I$(INC_DIR) $(PJ_CFLAGS)

#---LINKER FLAGS---

LDFLAGS := $(PJ_LDFLAGS)

#---LIBRARIES---

LDLIBS := $(PJ_LDLIBS)