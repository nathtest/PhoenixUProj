# Phoenix Projet

The Phoenix Project forked from Narkon.

This version is only compatible with this Engine version [https://github.com/nathtest/UnrealEngine/tree/4.27-chaos-HogwartsLegacy](https://github.com/nathtest/UnrealEngine/tree/4.27-chaos-HogwartsLegacy)

# 4.27-chaos-Hogwartslegacy engine

Manual fork of Narkon Unreal Engine updated with :
- Wwise plugin source and compiled dll
- PhotoMode cpp header
- Engine and Editor can be compiled

It's almost in the same state as Narkon but a few things (will add details later).


# How to install

## Install 4.27-chaos-HogwartsLegacy Unreal Engine Version

- Git clone or fork 4.27-chaos-HogwartsLegacy [https://github.com/nathtest/UnrealEngine/tree/4.27-chaos-HogwartsLegacy](https://github.com/nathtest/UnrealEngine/tree/4.27-chaos-HogwartsLegacy)
- Follow the readme on this repo and compile the engine with Visual studio (in step one when it's says "fork and clone our repository" you obliviously use the 4.27-chaos-HogwartsLegacy Engine)

## Wwise install
- Create an account on https://www.audiokinetic.com/en/ then download the AudioKinetic Launcher
- Install Wwise version 2021.1.9.7847.2311 (my install path is "A:\Wwise2021.1.9.7847")

## Install the Phoenix Projet

- Git clone or fork this project (where you want mine is "C:\Users\username\Documents\Unreal Projects\PhoenixUProj\")
- Open the .uproj with 4.27-chaos-Hogwartslegacy engine then build the phoenix solution in Visual Studio

- Open the editor
- Open Project Settings go to Wwise intergration
- Set the path of "Wwise Windows Installation Path" to your wwise install
- Verify the "Wwise Project Path" is set to C:\Users\username\Documents\Unreal Projects\PhoenixUProj\wwise_phoenix\wwise_phoenix.wproj

- Build your first pak mods
