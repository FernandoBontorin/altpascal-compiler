rm dist -R -force | Out-Null
mkdir dist | Out-Null
gcc .\lexic.c -o .\dist\lexic.exe | Out-Null
cd .\dist\ | Out-Null
.\lexic.exe "..\entrada.txt" "lexic.txt" > log.txt | Out-Null
cat lexic.txt
cd ..\