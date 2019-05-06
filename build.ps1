rm dist -R -force | Out-Null
mkdir dist | Out-Null
cp entrada.txt .\dist\ | Out-Null
gcc .\lexic.c -o .\dist\lexic.exe | Out-Null
cd .\dist\ | Out-Null
.\lexic.exe "entrada.txt" "out.txt" >> log.txt | Out-Null
cd ..\