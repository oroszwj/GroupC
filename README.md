# GroupC
Generic repository to enable group wide collaboration. 

## Open_VS_Code.bat
Simple batch script to open VS Code with all the repositories files in the explorer. The script assumes the portable mode install for version 1.25 or later. The path for VS Code will need to be edited to match the current user. The repository location will obviously need to be updated as well.

## OpenDeveloperCmdPrompt.bat
Simple batch script that opens a Visual Studio Developer Command Prompt for Visual Studio 2019 Community. Modify the path for Enterprise or Professional versions as needed.

## makeWithVC.bat
This script will compile the GroupC executable using the VC compiler. It cannot be run as a standalone unless VC has been added to the path and other environment vraiables have been set. 

## Compiling via CMD Line
Open a developer command prompth with OpenDeveloperCmdPrompt.bat first to ensure the environment variables are all set and then execute makeWithVC.bat at the new command prompt.

## BuildWithBazel.bat
This repo is also configured to be build via Bazel. If the bazel.exe is placed in the root of this repo, this script will build and run the executable.