@echo off

mkdir .\Debug
pushd .\Debug
cl -Zi -EHsc ..\GroupC\GroupC.cpp
popd
