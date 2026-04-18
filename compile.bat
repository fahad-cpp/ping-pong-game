if not exist bin mkdir bin
g++ Main.cpp -luser32 -lkernel32 -lgdi32 -o bin\ping-pong.exe