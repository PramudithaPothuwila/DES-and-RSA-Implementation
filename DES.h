#pragma once
#include <string>
#include <sstream>

#define BLOCK_SIZE 8
#define BLOCK_SIZE 8

enum Mode { ECB, CBC };//Mode of Operation

// Encrypts any length plainText with a set of 16 round keys
std::string DES_Encryption(const std::string& keyInput, const std::string& plainTextInput, Mode mode);

// Decrypts any length plainText with a set of 16 round keys
std::string DES_Decryption(const std::string& keyInput, const std::string& cipherTextInput, Mode mode);
