TOP  := top_bounce
VTOP := V$(TOP)
BUILD := build

# Use SDL2 from Linux
SDL_CFLAGS := $(shell sdl2-config --cflags)
SDL_LIBS   := $(shell sdl2-config --libs)

CXXFLAGS   := -O2 -std=c++17

.PHONY: sim clean

sim:
	@mkdir -p $(BUILD)
	verilator --cc --exe --build \
	    --Mdir $(BUILD) \
	    --top-module $(TOP) \
	    -Wno-fatal \
	    --CFLAGS "$(CXXFLAGS) $(SDL_CFLAGS)" \
	    --LDFLAGS "$(SDL_LIBS)" \
	    top_bounce.sv \
	    main_bounce.cpp
	./$(BUILD)/$(VTOP)

clean:
	rm -rf $(BUILD)