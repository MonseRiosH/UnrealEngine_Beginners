// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Core/Public/GenericPlatform/GenericPlatformFile.h"
#include "TextManager.generated.h"

/**
 * 
 */
UCLASS()
class NOMBREDELPROYECTO_API UTextManager : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "Save"))
		static bool SaveArrayText(FString SaveDirectory, FString FileName, TArray<FString> SaveText, bool AllowOverWriting);
	//GENERATED_BODY()
		//UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "Crear"))
		//static bool CrearCuenta(FString Directory, FString Name);

};
//class FIGURAS_API UTextFileManager : public UBlueprintFunctionLibrary
//{
	//GENERATED_BODY()
	//UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "Crear"))
//|	static bool CrearCuenta(FString Directory, FString Name, TArray<FString> Save);


//};
