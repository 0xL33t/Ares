# Ares

Cheat base for Counter-Strike: Global Offensive

# Includes

CreateMove, PaintTraverse, and OpenGL hook. (Includes example imgui rendering and bhop).
ImGUI rendering through OpenGL.
Semi-complete SDK (Includes ISurface rendering functions, etc).

# Dependencies

Arch:
```bash
sudo pacman -S base-devel cmake gdb git sdl2
```

Debian:
```bash
sudo apt-get install cmake g++ gdb git libsdl2-dev zlib1g-dev
```

# Compiling

CD into Ares' directory, and generate a makefile using
```bash
cmake .
```
then
```bash
make
```

# Credits
aixxe, nanocat, valve
