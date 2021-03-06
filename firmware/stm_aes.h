#ifndef AES_H
#define AES_H

#include "regmap.h"

void stm_aes_init();
void stm_aes_128_encrypt(const u8 *key, const u8 *din, u8 *dout);
void stm_aes_128_decrypt(const u8 *key, const u8 *din, u8 *dout);
void stm_aes_128_decrypt_cbc(const u8 *key, int n_blocks, const u8 *iv, const u8 *din, u8 *dout);
void stm_aes_128_encrypt_cbc(const u8 *key, int n_blocks, const u8 *iv, const u8 *din, u8 *dout);
void stm_aes_256_encrypt(const u8 *key, const u8 *din, u8 *dout);
void stm_aes_256_decrypt(const u8 *key, const u8 *din, u8 *dout);
void stm_aes_256_decrypt_cbc(const u8 *key, int n_blocks, const u8 *iv, const u8 *din, u8 *dout);
void stm_aes_256_encrypt_cbc(const u8 *key, int n_blocks, const u8 *iv, const u8 *din, u8 *dout);
#endif
