:: This batch file opens VS Code to the repository root
@echo off

:: Add repository root path to %path
set path=D:\GitHubRepositories\GroupC;%path%

:: VS Code now installs at C:\Users\{UserName}\AppData\Local\Programs\Microsoft VS Code
:: Start "" "<Location of Code.exe>" "<Relative location of repository>"
Start "" "C:\Users\ENGadmin\AppData\Local\Programs\Microsoft VS Code\Code.exe" "."

:: Alternatively if Code was installed prior to version 1.25 the executable is located here:
:: C:\Program Files (x86)\Microsoft VS Code\Code.exe
:: Or C:\Program Files\Microsoft VS Code\Code.exe
:: Depending on Bitness
::Start "" "C:\Program Files\Microsoft VS Code\Code.exe" "."