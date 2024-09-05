# Phoenix Projet

The Phoenix Project forked from Narkon.

This version is only compatible with this Engine version [https://github.com/nathtest/UnrealEngine/tree/4.27-chaos-HogwartsLegacy](https://github.com/nathtest/UnrealEngine/tree/4.27-chaos-HogwartsLegacy)

# 4.27-chaos-Hogwartslegacy engine

Manual fork of Narkon Unreal Engine updated with :
- Wwise plugin source and compiled dll
- PhotoMode cpp header
- Engine and Editor can be compiled

It's almost in the same state as Narkon (only the dummy feature is not compatible and therefore excluded in this build).


# How to install

## Install 4.27-chaos-HogwartsLegacy Unreal Engine Version

- Git clone or fork 4.27-chaos-HogwartsLegacy [https://github.com/nathtest/UnrealEngine/tree/4.27-chaos-HogwartsLegacy](https://github.com/nathtest/UnrealEngine/tree/4.27-chaos-HogwartsLegacy)
- Follow the readme for Windows on this repo and compile the engine with Visual studio (In step one when it's says "fork and clone our repository" you obliviously use the 4.27-chaos-HogwartsLegacy Engine repo)
- Yep it's just the standard Unreal Engine compile instructions no magic to it (just the first compile is very long ~5 hours) 

My tools version : 
- Visual Studio 2022 14.34.31942 toolchain (C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.34.31933) 
- Windows 10.0.22000.0 SDK (C:\Program Files (x86)\Windows Kits\10).

## Wwise install
- Create an account on https://www.audiokinetic.com/en/ then download the AudioKinetic Launcher
- Install Wwise version 2021.1.9.7847.2311 (my install path is "A:\Wwise2021.1.9.7847")

## Install the Phoenix Projet

- Git clone or fork this project (where you want mine is "C:\Users\username\Documents\Unreal Projects\PhoenixUProj\")
- Open the .uproj with 4.27-chaos-Hogwartslegacy engine (right click) then build the phoenix solution in Visual Studio

- Open the editor
- Open Project Settings go to "Wwise integration"
- Set the path of "Wwise Windows Installation Path" to your wwise install
- Verify the "Wwise Project Path" is set to C:\Users\username\Documents\Unreal Projects\PhoenixUProj\wwise_phoenix\wwise_phoenix.wproj

- Build your first pak mods !

## The Wwise project
- Open it using the Wwise Launcher and use it to add new audio (can follow this on how to create bank sound ect... start at 5:51 [https://www.youtube.com/watch?v=X8V9sX_FfpM](Youtube Tuto) )
- Your must package only your new bnk files (but not the init one) and also any Unreal Engine Wwise assets (bank, event, ect...)
