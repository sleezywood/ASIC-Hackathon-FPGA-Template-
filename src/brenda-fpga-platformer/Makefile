TOP  := top_bounce
VTOP := V$(TOP)
BUILD := build

SDL_PREFIX := $(shell brew --prefix sdl2)
SDL_FLAGS  := -I$(SDL_PREFIX)/include/SDL2 -L$(SDL_PREFIX)/lib -lSDL2
CXXFLAGS   := -O2 -std=c++17

.PHONY: sim clean

sim:
	@mkdir -p $(BUILD)
	verilator --cc --exe --build \
	    --Mdir $(BUILD) \
	    --top-module $(TOP) \
	    -Wno-fatal \
	    --CFLAGS "$(CXXFLAGS) $(SDL_FLAGS)" \
	    --LDFLAGS "$(SDL_FLAGS)" \
	    top_bounce.sv \
	    main_bounce.cpp
	./$(BUILD)/$(VTOP)

clean:
	rm -rf $(BUILD)
