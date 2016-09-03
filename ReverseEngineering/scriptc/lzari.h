
/**************************************************************
	LZARI.C -- A Data Compression Program
	(tab = 4 spaces)
***************************************************************
	4/7/1989 Haruhiko Okumura
	Use, distribute, and modify this program freely.
	Please send me your improved versions.
		PC-VAN		SCIENCE
		NIFTY-Serve	PAF01022
		CompuServe	74050,1022
**************************************************************/

/********** Bit I/O **********/
#ifndef _FILE_H_COMPRESSION_LZARI_
#define  _FILE_H_COMPRESSION_LZARI_
#pragma warning(disable:4786)
#include <vector>

//#define _OUTPUT_STATUS

#define N		 4096	/* size of ring buffer */
#define F		   60	/* upper limit for match_length */
#define THRESHOLD	2   /* encode string into position and length
						   if match_length is greater than this */
#define NIL			N	/* index for root of binary search trees */
/********** Arithmetic Compression **********/

/*  If you are not familiar with arithmetic compression, you should read
		I. E. Witten, R. M. Neal, and J. G. Cleary,
			Communications of the ACM, Vol. 30, pp. 520-540 (1987),
	from which much have been borrowed.  */

#define M   15

/*	Q1 (= 2 to the M) must be sufficiently large, but not so
	large as the unsigned long 4 * Q1 * (Q1 - 1) overflows.  */

#define Q1  (1UL << M)
#define Q2  (2 * Q1)
#define Q3  (3 * Q1)
#define Q4  (4 * Q1)
#define MAX_CUM (Q1 - 1)

#define N_CHAR  (256 - THRESHOLD + F)

class LZARI 
{
public:	
	LZARI();
	virtual ~LZARI();
protected:
	unsigned long textsize;
	unsigned long codesize;
	unsigned long printcount;
	unsigned char  text_buf[N + F - 1];	/* ring buffer of size N,with extra F-1 bytes to facilitate string comparison */
	int	match_position;
	int	match_length;  /* of longest match.  These areset by the InsertNode() procedure. */
	int	lson[N + 1];
	int rson[N + 257];
	int dad[N + 1];  /* left & right children &parents -- These constitute binary search trees. */

	/* character code = 0, 1, ..., N_CHAR - 1 */

	unsigned long low;
	unsigned long high;
	unsigned long value;
	int  shifts;  /* counts for magnifying low and high around Q2 */
	int  char_to_sym[N_CHAR];
	int sym_to_char[N_CHAR + 1];
	unsigned int sym_freq[N_CHAR + 1];  /* frequency for symbols */
	unsigned int sym_cum[N_CHAR + 1];   /* cumulative freq for symbols */
	unsigned int position_cum[N + 1];   /* cumulative freq for positions */

	std::vector<BYTE> m_OutBuffer;
	int m_nOutLength;

	const BYTE *m_pInBuffer;
	int m_nInLength;
	int m_nInCur;

	unsigned int  buffer_putbit, mask_putbit;
	unsigned int  buffer_getbit, mask_getbit;

private:
	void Error(char *message);
	void PutBit(int bit);  /* Output one bit (bit = 0,1) */
	void FlushBitBuffer(void);  /* Send remaining bits */
	int GetBit(void);  /* Get one bit (0 or 1) */

/********** LZSS with multiple binary trees **********/

	void InitTree(void);  /* Initialize trees */
	void InsertNode(int r);
	void DeleteNode(int p);  /* Delete node p from tree */
	void StartModel(void); /* Initialize model */
	void UpdateModel(int sym);
	void Output(int bit);  /* Output 1 bit, followed by its complements */
	void EncodeChar(int ch);
	void EncodePosition(int position);
	void EncodeEnd(void);
	int BinarySearchSym(unsigned int x);
	int BinarySearchPos(unsigned int x);
	void StartDecode(void);
	int DecodeChar(void);
	int DecodePosition(void);

	void Encode(void);
	void Decode(void);
public:
	BYTE* Compress(const BYTE *pInBuffer,int nInLength,int &nOutLength);
	BYTE* Decompress(const BYTE *pInBuffer,int nInLength,int &nOutLength);
	void Reset(void);
};

#endif
