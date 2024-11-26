nasm -f win64 MP2.asm
gcc -c MP2.c -o C.obj -m64
gcc C.obj MP2.obj -o MP2.exe -m64
MP2.exe < 100-inputs.txt
pause