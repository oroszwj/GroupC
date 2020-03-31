:: Change directories to the location of the build scripts.
:: Set path to repository root.
:: Then set up the environment for building the application with the visual studio command line.
@echo off
title: Game Engine Playground

set path=D:\GitHubRepositories\GroupC;%path%

:: For Community Editions.
call %comspec% /K "C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Auxiliary\Build\vcvars64.bat"

:: For Professional Editions.
::call %comspec% /K "C:\Program Files (x86)\Microsoft Visual Studio\2019\Professional\VC\Auxiliary\Build\vcvars64.bat"
