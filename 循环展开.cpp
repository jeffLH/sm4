// TÖÃ»» 
uint32_t T_(uint32_t m)
{
	uint8_t s[4];
	uint32_t res = 0;
	s[0] = m >> 24; s[0] = Sbox[s[0] >> 4][s[0] & 0x0f]; res
		|= s[0] << 24;
	s[1] = m >> 16; s[1] = Sbox[s[1] >> 4][s[1] & 0x0f]; res
		|= s[1] << 16;
	s[2] = m >> 8; s[2] = Sbox[s[2] >> 4][s[2] & 0x0f]; res
		|= s[2] << 8;
	s[3] = m >> 0; s[3] = Sbox[s[3] >> 4][s[3] & 0x0f]; res
		|= s[3] << 0; return res ^ (((res << 2) | (res >> 30)) & num) ^ (((res
			<< 10) | (res >> 22)) & num) ^ (((res << 18) | (res >> 14))
				& num) ^ (((res << 24) | (res >> 8)) & num);
}
// T' ÖÃ»» 
uint32_t T1_(uint32_t m)
{
	uint8_t s[4];
	uint32_t res = 0;
	s[0] = m >> 24; s[0] = Sbox[s[0] >> 4][s[0] & 0x0f]; res
		|= s[0] << 24;
	s[1] = m >> 16; s[1] = Sbox[s[1] >> 4][s[1] & 0x0f]; res
		|= s[1] << 16;
	s[2] = m >> 8; s[2] = Sbox[s[2] >> 4][s[2] & 0x0f]; res
		|= s[2] << 8;
	s[3] = m >> 0; s[3] = Sbox[s[3] >> 4][s[3] & 0x0f]; res
		|= s[3] << 0;
	return res ^ (((res << 13) | (res >> 19)) & num) ^
		(((res << 23) | (res >> 9)) & num);
}