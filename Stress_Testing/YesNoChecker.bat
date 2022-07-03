@echo off
g++ -std=c++17 -o Gen.exe CaseGen.cpp
g++ -std=c++17 -o code.exe code.cpp
g++ -std=c++17 -o brute.exe brute.cpp
for /l %%x in (1, 1, 100000) do (
    Gen.exe > input
    code.exe < input > output 
    brute.exe < output > output2
    fc output output2 > diagnostics || echo the case was && type input && echo Your ans is && type output && echo correct ans is && type output2 && exit /b
    echo %%x
)
echo all tests passed
pause