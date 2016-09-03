#ifndef MD5_H
#define MD5_H
#pragma pack(push, 1)

struct MD5Context
{
  uint32 buf[4];
  uint32 bits[2];
  unsigned char in[64];
};

idaman void ida_export MD5Init(MD5Context *context);
idaman void ida_export MD5Update(MD5Context *context, const uchar *buf, size_t len);
idaman void ida_export MD5Final(uchar digest[16], MD5Context *context);
idaman void ida_export MD5Transform(uint32 buf[4], uint32 const in[16]);

#pragma pack(pop)
#endif /* !MD5_H */
