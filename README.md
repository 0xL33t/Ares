# Ares
Cheat base for Counter-Strike: Global Offensive

# Includes
CreateMove Hook (And an example bunnyhop).
ImGUI rendering through OpenGL.
Semi-complete SDK (Includes ISurface rendering functions, etc).

# Dependencies / Compiling

# Dependencies >>

# Arch:
```bash
sudo pacman -S base-devel cmake gdb git sdl2
```

# Debian
```bash
sudo apt-get install cmake g++ gdb git libsdl2-dev zlib1g-dev
```

# Compiling >>
CD into Ares' directory, and generate a makefile using
```bash
cmake .
```
then
```bash
make
```

# Loading >>
Load the library using grep.
```bash
./load
```

# Credits
aixxe
nanocat
