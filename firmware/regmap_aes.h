#define AES_BASE 0x40026000
#define AES_CR REGISTER(AES_BASE + 0)
#define AES_SR REGISTER(AES_BASE + 0x4)
#define AES_DINR REGISTER(AES_BASE + 0x8)
#define AES_DOUTR REGISTER(AES_BASE + 0xc)
#define AES_KEY(X) REGISTER(AES_BASE + 0x10 + X * 4)
#define AES_IVR(X) REGISTER(AES_BASE + 0x20 + X * 4)

#define AES_CR_DATATYPE_FACTOR (2)
#define AES_CR_DATATYPE_MASK (6)
#define AES_CR_DATATYPE_NO_SWAP (AES_CR_DATATYPE_FACTOR * 0)
#define AES_CR_DATATYPE_HALFWORD_SWAP (AES_CR_DATATYPE_FACTOR * 1)
#define AES_CR_DATATYPE_BYTE_SWAP (AES_CR_DATATYPE_FACTOR * 2)
#define AES_CR_DATATYPE_BIT_SWAP (AES_CR_DATATYPE_FACTOR * 3)

#define AES_CR_EN 1

#define AES_CR_MODE_FACTOR (1<<3)
#define AES_CR_MODE_MASK (0x18)
#define AES_CR_MODE_ENCRYPTION (AES_CR_MODE_FACTOR * 0)
#define AES_CR_MODE_KEY_DERIVATION (AES_CR_MODE_FACTOR * 1)
#define AES_CR_MODE_DECRYPTION (AES_CR_MODE_FACTOR * 2)
#define AES_CR_MODE_KEY_DERIVATION_AND_DECRYPTION (AES_CR_MODE_FACTOR * 3)

#define AES_CR_CHMOD_FACTOR (1<<5)
#define AES_CR_CHMOD_MASK (0x60)
#define AES_CR_CHMOD_EBC (AES_CR_CHMOD_FACTOR * 0)
#define AES_CR_CHMOD_CBC (AES_CR_CHMOD_FACTOR * 1)
#define AES_CR_CHMOD_CTR (AES_CR_CHMOD_FACTOR * 2)

#define AES_CR_CCFC (1<<7)
#define AES_CR_ERRC (1<<8)
#define AES_CR_CCFIE (1<<9)
#define AES_CR_ERRIE (1<<10)

#define AES_SR_CCF (1<<0)
#define AES_SR_RDERR (1<<1)
#define AES_SR_WRERR (1<<2 )
