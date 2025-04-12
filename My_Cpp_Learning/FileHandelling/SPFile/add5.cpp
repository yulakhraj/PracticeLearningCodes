#include <iostream>
#include <Windows.h>

const wchar_t* registryKeyPath = L"SOFTWARE\\YourCompanyName\\YourApplicationName"; // Replace with your desired registry key path

int main() {
    HKEY hKey;
    LONG openResult = RegOpenKeyEx(HKEY_LOCAL_MACHINE, registryKeyPath, 0, KEY_READ, &hKey);

    if (openResult != ERROR_SUCCESS) {
        std::cerr << "Error opening registry key. Error code: " << openResult << std::endl;
        return 1;
    }

    DWORD dataType;
    DWORD dataSize = sizeof(DWORD);
    DWORD sum = 0;
    DWORD value;

    for (DWORD index = 0;; ++index) {
        wchar_t valueName[256];
        dataSize = sizeof(value);
        DWORD nameSize = sizeof(valueName) / sizeof(valueName[0]);
        LONG queryResult = RegEnumValue(hKey, index, valueName, &nameSize, nullptr, &dataType, (LPBYTE)&value, &dataSize);

        if (queryResult == ERROR_NO_MORE_ITEMS) {
            break;
        } else if (queryResult != ERROR_SUCCESS) {
            std::cerr << "Error reading registry value. Error code: " << queryResult << std::endl;
            RegCloseKey(hKey);
            return 1;
        }

        if (dataType == REG_DWORD) {
            sum += value;
        }
    }

    RegCloseKey(hKey);

    std::cout << "Sum of values in the registry: " << sum << std::endl;
    return 0;
}
