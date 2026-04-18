@echo off
if not exist bin mkdir bin
g++ src/Main.cpp src/Renderer.cpp src/Game.cpp -luser32 -lkernel32 -lgdi32 -o bin\ping-pong.exe