// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"

FString UMyBlueprintFunctionLibrary::hello(int a, int b)
{
	int foo = a + b;
	return FString(FString::Printf(TEXT("Hellp. Our Value is %d + %d = %d (C++)"),a,b,foo));
}
