:: This batch file opens VS Code to the repository root
@echo off

:: Add repository root path to %path
set path=D:\GitHubRepositories\GroupC;%path%

:: Start "" "<Location of Code.exe>" "<Relative location of repository>"
Start "" "C:\Users\avena\AppData\Local\Programs\Microsoft VS Code\Code.exe" "."