#include <iostream>
using namespace std;
int main()
{
    //number 1
    //FILE* file = nullptr;
    //FILE* result = nullptr;

    //fopen_s(&file, "text.txt", "r");
    //fopen_s(&result, "result.txt", "w");

    //char word[100];

    //while (fscanf_s(file, "%99s", word, (unsigned)_countof(word)) == 1) {
    //    int size = 0;

    //    while (word[size] != '\0') {
    //        size++;
    //    }

    //    if (size >= 7) {
    //        fprintf_s(result, "%s ", word);
    //    }
    //}

    //fclose(file);
    //fclose(result);

    //number 2
    //FILE* file = nullptr;
    //FILE* result = nullptr;

    //fopen_s(&file, "text.txt", "r");
    //fopen_s(&result, "result.txt", "w");

    //char line[256];

    //while (fgets(line, 256, file) != nullptr) {
    //    fprintf_s(result, "%s", line);
    //}

    //fclose(file);
    //fclose(result);
  
    //number 3
    //FILE* file = nullptr;
    //FILE* result = nullptr;

    //fopen_s(&file, "text.txt", "r");
    //fopen_s(&result, "result.txt", "w");

    //char arr[100][256];
    //int size = 0;

    //while (size < 100 && fgets(arr[size], 256, file) != nullptr) {
    //    size++;
    //}

    //for (int i = size - 1; i >= 0; i--) {
    //    fprintf_s(result, "%s", arr[i]);
    //}

    //fclose(file);
    //fclose(result);

    //number 4
    FILE* file = nullptr;
    FILE* result = nullptr;
    fopen_s(&file, "text.txt", "r");
    fopen_s(&result, "result.txt", "w");
    char arr[100][256];
    int size = 0;
    int index = -1;
    while (size < 100 && fgets(arr[size], 256, file) != nullptr) {
        int i = 0;
        bool space = false;
        while (arr[size][i] != '\0' && arr[size][i] != '\n') {
            if (arr[size][i] == ' ') {
                space = true;
            }
            i++;
        }
        if (space == false) {
            index = size;
        }
        size++;
    }
    for (int i = 0; i < size; i++) {
        fprintf_s(result, "%s", arr[i]);
        if (i == index) {
            fprintf_s(result, "------------\n");
        }
    }
    if (index == -1) {
        fprintf_s(result, "------------\n");
    }
    fclose(file);
    fclose(result);
}