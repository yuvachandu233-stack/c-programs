#include <stdio.h> 
 
// Define a bitfield structure 
struct Bitfield { 
    unsigned int data : 8; // 8-bit field for demonstration 
}; 
 
int main() { 
    struct Bitfield bf; 
    bf.data = 0x0A; // Initialize with binary 00001010 
 
    printf("Original Value: 0x%X\n", bf.data); 
 
    // Right-shift operation 
    bf.data = bf.data >> 1; 
    printf("Right-Shift by 1: 0x%X\n", bf.data); 
 
    // Left-shift operation 
    bf.data = bf.data << 2; 
    printf("Left-Shift by 2: 0x%X\n", bf.data); 
 
    // Bitwise rotation to the left 
bf.data = (bf.data << 3) | (bf.data >> (8 - 3)); 
printf("Left-Rotate by 3: 0x%X\n", bf.data); 
// Bitwise rotation to the right 
bf.data = (bf.data >> 2) | (bf.data << (8 - 2)); 
printf("Right-Rotate by 2: 0x%X\n", bf.data); 
return 0; 
}