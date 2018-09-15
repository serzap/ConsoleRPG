cmake_minimum_required(VERSION 2.8)

project(TestRPG)
set(SOURCE_FILES main.cpp
   View/CConsole.hpp View/CConsole.cpp
   Controller/CController.hpp Controller/CController.cpp
   Controller/Hero/CHero.hpp Controller/Hero/CHero.cpp
   Controller/Hero/CInventory.hpp Controller/Hero/CInventory.cpp
   Controller/Hero/CEquipment.hpp Controller/Hero/CEquipment.cpp
   Controller/Hero/CAttributes.hpp Controller/Hero/CAttributes.cpp
   Controller/Hero/CAbilities.hpp Controller/Hero/CAbilities.cpp
   Controller/Item/CItem.hpp Controller/Item/CItem.cpp
   Controller/Item/CWeapon.hpp Controller/Item/CWeapon.cpp
   Controller/Ability/CAbility.hpp Controller/Ability/CAbility.cpp)
add_executable(TestRPG ${SOURCE_FILES})
