include ../../Makefile.common
#CC=nios2-linux-gnu-gcc -g
#CXX=nios2-linux-gnu-g++

LIB_DIR=            ../../lib/

API_ROOT_DIR=		$(LIB_DIR)CS6041_Release_5.13

INCLUDES=			-I$(API_ROOT_DIR)/platform \
                    -I$(API_ROOT_DIR)/T41 \
                    -I../../../ncurses/include \
                    -I../../../aardvark/c \
                    -I../../../readline/include \
                    -I../../lib/hl_configs \
                    -I../../lib/utils \
                    -I../../lib/cs6041 \
                    -I../../lib/xfp \
                    -I../../lib/txp \
                    -I../../lib/edfa \
                    -I../../lib/rtc \
                    -I../../lib/fan \
                    -I../../lib/qsfp \
                    -I../../lib/gpio \
                    -I../../lib/tmp \
                    -I../../lib/power_supply \
                    -I../../lib/hmd \
                    -I../../lib/i2c \
                    -I../../lib/ltc \
                    -I../../lib/led
#INCLUDES=			-I$(API_ROOT_DIR)/platform -I$(API_ROOT_DIR)/T41 -I/usr/local/include/
INC=				general \
					stats \
                    mpif \
                    irq \
                    fec \
                    glb \
                    gpllx1 \
                    fracdiv \
                    hsif \
                    pp10g \
                    n40g \
                    n10g \
                    xcon \
                    pp40g \
                    ohpp \
                    syncdsync \
                    highlevel \
                    hl_config \
                    debug \
                    dm
INC_MODULES=		$(foreach d, $(INC), -I$(MODULES)/$(d))

LIBS=               -L../../../ncurses/lib \
                    -L../../../readline/lib \
                    -L../../../aardvark/c/_output \
                    -L$(API_ROOT_DIR)/T41/targets/Linux/ \
                    -lm -lrt -lpthread
#LIBS=				-lm -lreadline -L/usr/local/lib/  -L$(API_ROOT_DIR)/T41/targets/Linux/   


MODULES=			$(API_ROOT_DIR)/T41/modules

#TARGET=  test41 gccrx gcctx #testoclaro #xfi_10g_kpg_kpa sfi51_40g_kpga prbs_sfi51 prbs_sfi42 prbs_daisy_chain

all:	$(TARGET)

%: %.h %.c
	$(CC) $(INCLUDES) $(INC_MODULES) $@.c  $(LIBS) $(LIB_DIR)xfp/xfp.o $(LIB_DIR)xfp/hl_xfp.o $(LIB_DIR)clk/clk.o $(LIB_DIR)rtc/rtc.o $(LIB_DIR)i2c/i2c.o  $(LIB_DIR)fan/fan.o $(LIB_DIR)qsfp/qsfp.o $(LIB_DIR)qsfp/hl_qsfp.o $(LIB_DIR)hmd/hmd.o $(LIB_DIR)tmp/tmp.o $(LIB_DIR)txp/txp.o $(LIB_DIR)txp/hl_txp.o $(LIB_DIR)silabs/silabs.o $(LIB_DIR)power_supply/power_supply.o $(LIB_DIR)edfa/edfa.o $(LIB_DIR)edfa/hl_edfa.o $(LIB_DIR)gpio/gpio.o $(LIB_DIR)ltc/ltc.o $(LIB_DIR)led/led.o $(LIB_DIR)bitman/bitman.o $(LIB_DIR)cs6041/cs6041.o $(LIB_DIR)utils/utils.o $(LIB_DIR)utils/filelock.o $(LIB_DIR)hl_configs/hl_configs.o $(API_ROOT_DIR)/T41/targets/Linux/tenabo.a $(LIB_DIR)mxml-2.9/libmxml.a -o ../../bin/$@
clean:
	rm -rf 
