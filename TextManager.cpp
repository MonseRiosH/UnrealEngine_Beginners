#include "TextManager.h"
#include "Misc/FileHelper.h"
#include "HAL/PlatformFileManager.h"

static FORCEINLINE bool VerifyOrCreateDirectory(const FString& TestDir) {
    IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

    if (!PlatformFile.DirectoryExists(*TestDir)) {
        PlatformFile.CreateDirectory(*TestDir);
        if (!PlatformFile.DirectoryExists(*TestDir)) {
            return false;
        }
    }
    return true;
}

bool UTextManager::SaveArrayText(FString SaveDirectory, FString FileName, TArray<FString> SaveText, bool AllowOverWriting) {
    SaveDirectory += "\\";
    SaveDirectory += FileName;
    bool archivoExistente;

    if (AllowOverWriting) {
        FString FinalString = "";
        for (FString& Each : SaveText) {
            FinalString += Each;
            FinalString += LINE_TERMINATOR;
        }
        return FFileHelper::SaveStringToFile(FinalString, *SaveDirectory, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), EFileWrite::FILEWRITE_None);
    } else {
        FString FinalString = "";
        for (FString& Each : SaveText) {
            FinalString += Each;
            FinalString += LINE_TERMINATOR;
        }
        return FFileHelper::SaveStringToFile(FinalString, *SaveDirectory, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), EFileWrite::FILEWRITE_Append);
    }

    return archivoExistente;
}
