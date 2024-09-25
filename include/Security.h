#ifndef SECURITY_H
#define SECURITY_H

#include <string>

class Security
{
private:
    static std::string encryptionKey;

public:
    static std::string hashPassword(const std::string &password);
    // using AES
    static std::string encrypt(const std::string &data);

    static std::string decrypt(const std::string &encryptedData);
};

#endif