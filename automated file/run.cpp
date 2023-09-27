#include <iostream>
#include <cstdlib> // For system function

int main() {
    // Specify the path to the text file you want to open
    const char* filePath = "C:\\Users\\HP\\Desktop\\cpp\\problem.txt"; // Replace with the actual file path

    // Construct the command to open the file with Notepad on Windows
    const char* command = "start notepad ";
    char fullCommand[256];
    snprintf(fullCommand, sizeof(fullCommand), "%s\"%s\"", command, filePath);

    // Execute the command to open the file
    int result = system(fullCommand);

    return 0;
}
