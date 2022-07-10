#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    //make sure arg count is 2
    if (argc != 2)
    {
        printf("Usage: ./recover IMAGE\n");
        return 1;
    }
    //open file
    FILE *input = fopen(argv[1], "r");
    //check if valid
    if (input == NULL)
    {
        printf("Could not open file\n");
        return 2;
    }
    //store blocks of 512 bytes in an array.
    unsigned char buffer[512];
    //number of image generated
    int image_count = 0;
    //file pointer for recovered images, output files
    FILE *output = NULL;
    //char filename
    char *filename = malloc(8 * sizeof(char));
    //read the blocks of 512 bytes
    while (fread(buffer, sizeof(char), 512, input))
    {
        //check if bytes indicate JPEG
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            sprintf(filename, "%03i.jpg", image_count);
            output = fopen(filename, "w");
            image_count++;
        }
        if (output != NULL)
        {
            fwrite(buffer, sizeof(char), 512, output);
        }
    }
    free(filename);
    fclose(output);
    fclose(input);
    return 0;

}