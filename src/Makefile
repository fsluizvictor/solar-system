all: src/controllers/Main.c
	gcc src/controllers/Main.c -I.-ISOIL -lglut -lGLU -lSOIL -lGLEW -lGL -w -lm `sdl-config --cflags --libs` -ISDL -lSDL_mixer

clean:
	rm -rf *.0 a.out

run: 
	./a.out